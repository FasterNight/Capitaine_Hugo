#include "Settings.h"
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "\x1b[2J\n";   // Efface tous les caractères de la console 
    
    std::cout << "\x1b[H\n";    // Met à la position (0,0) le curseur 
    
 
    std::cout << "\x1b[?25l\n"; // Rend invisible le curseur
    
    std::cout << "Hello World!\n";
    
    std::cout << "\x1b[?25h\n"; // Rend visible le curseur 

    
    Settings s(atoi(argv[1]), atoi(argv[2])); // Constructeur du tableau 

    for (int i = 1; i < s.GetHeight(); i++) // Hauteur
    {
        for (int j = 1; j < s.GetWidth(); j++) // Largeur 
        {
            std::cout << ".";
        }
        std::cout << "\n";
    }
}

