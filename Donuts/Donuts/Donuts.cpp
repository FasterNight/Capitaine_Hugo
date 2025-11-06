#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "\x1b[2J\n";   // Efface tous les caractères de la console 
    
    std::cout << "\x1b[H\n";    // Met à la position (0,0) le curseur 
    
 
    std::cout << "\x1b[?25l\n"; // Rend invisible le curseur
    
    std::cout << "Hello World!\n";
    
    std::cout << "\x1b[?25h\n"; // Rend visible le curseur 

    int h = atoi(argv[1]); // Variable Hauteur 
    int w = atoi(argv[2]); // Variable Largeur

    std::cout << h << "\n" << w << std::endl;
    for (int i = 1; i < 20; i++) // Hauteur
    {
        for (int j = 1; j < 100; j++) // Largeur 
        {
            std::cout << ".";
        }
        std::cout << "\n";
    }
}

