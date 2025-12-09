#include <iostream>
#include <windows.h> // For console settings
#include <csignal>
#include "Settings.h"
#include "Screen.h"
#include "Mesh.h"

void InitConsole()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hConsole, &mode);
    SetConsoleMode(hConsole, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
}

void ClearConsole()
{
    std::cout << "\x1b[2J"; // Remove all characters in console
    std::cout << "\x1b[H"; // Set cursor pos to "home" position (0,0)
}

void SetCursorVisible(bool visible)
{
    if(visible)
    {
        std::cout << "\x1b[?25h"; // Make cursor visible
    }
    else
    {
        std::cout << "\x1b[?25l"; // Make cursor invisible
    }
}

void OnKill(int signum)
{
    SetCursorVisible(true);
    ClearConsole();
    exit(signum);
}

int main(int argc, char** argv)
{
    signal(SIGINT, OnKill);

    InitConsole();
    ClearConsole();
    SetCursorVisible(false);
    Settings settings(argc, argv);
    Screen screen(settings);
    screen.Display();

    Mesh mesh(settings);
    mesh.GenerateTorus(5,1.2f);

    DWORD lastSwitch = GetTickCount();
    bool switchRotate = false;

    while (true)
    {
        std::cout << "\x1b[H";

        DWORD now = GetTickCount();

        if (now - lastSwitch >= 5000)
        {
            switchRotate = !switchRotate;
            lastSwitch = now; 
        }

        if (!switchRotate)
        {
            mesh.Rotate(settings.GetMeshRotationXPerFrame(), Axis::X);
            mesh.Rotate(settings.GetMeshRotationYPerFrame(), Axis::Y);
        }
        else
        {
            mesh.Rotate(settings.GetMeshRotationXPerFrame(), Axis::X);
            mesh.Rotate(settings.GetMeshRotationZPerFrame(), Axis::Z);
        }

        screen.Display(mesh);
        Sleep(1);
    }
    return 0;
}