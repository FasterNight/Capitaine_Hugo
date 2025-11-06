#include "Settings.h"
#include <iostream>

#define Vert = "\e[38;2;0;255;0m"
#define Close = "\e[0m"

int main(int argc, char* argv[])
{
    //std::cout << "\x1b[2J\n";   // Efface tous les caractères de la console 
    //
    //std::cout << "\x1b[H\n";    // Met à la position (0,0) le curseur 
    //
 
    //std::cout << "\x1b[?25l\n"; // Rend invisible le curseur
    //
    //std::cout << "Hello World!\n";
    //
    //std::cout << "\x1b[?25h\n"; // Rend visible le curseur 

    int HeightValue = 0;
    int WidthValue = 0;

    for (int i = 1; i < argc; ++i)
    {
        std::string arg = argv[i];

        if (arg == "-h" && i + 1 < argc)
        {
            HeightValue = atoi(argv[i + 1]);
        }
        else if (arg == "-w" && i + 1 < argc)
        {
            WidthValue = atoi(argv[i + 1]);
        }
        else
        {
            std::cout << "|=====================|HELP|=======================|" << std::endl;
            std::cout << "Use -h for set the height and -w for set the width !" << std::endl;
            std::cout << "\n";
            std::cout << Vert << "[EXEMPLE] -h 20 -w 100" << Close <<  std::endl;
            return 0;
        }
    }




    Settings s(HeightValue, WidthValue); // Constructeur du tableau 

    for (int i = 1; i < s.GetHeight(); i++) // Hauteur
    {
        for (int j = 1; j < s.GetWidth(); j++) // Largeur 
        {
            std::cout << ".";
        }
        std::cout << "\n";
    }
}

