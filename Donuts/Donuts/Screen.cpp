#include "pch.h"
#include "Screen.h"

Screen::Screen()
{
}

Screen::Screen(int height, int width)
{
    mHeight = height;
    mWidth = width;

    for (int i = 1; i < mHeight; i++) // Hauteur
    {
        for (int j = 1; j < mWidth; j++) // Largeur 
        {
            std::cout << ".";
        }
        std::cout << "\n";
    }
}

void Screen::Display()
{
    for (int i = 1; i < mHeight; i++) // Hauteur
    {
        for (int j = 1; j < mWidth; j++) // Largeur 
        {
            std::cout << ".";
        }
        std::cout << "\n";
    }
}

void Screen::Clear()
{
    std::cout << "\033[2J\033[1;1H";
}

void Screen::SetHeight(int height)
{
    mHeight = height;
}

void Screen::SetWidth(int width)
{
    mWidth = width;
}

int Screen::GetHeight()
{
    return mHeight;
}

int Screen::GetWidth()
{
    return mWidth;
}
