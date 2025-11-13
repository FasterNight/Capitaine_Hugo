#include "pch.h"

int main(int argc, char* argv[])
{
    Settings settings(argc, argv); // Constructeur des paramètres 
    Screen screen(settings.GetHeight(), settings.GetWidth()); 

    std::vector<Vertex> test = 
    {
            {-1.f, -1.f, 0.f},
         {-1.f,  1.f, 0.f},
         { 1.f, -1.f, 0.f},
         { 1.f,  1.f, 0.f}
    };

    Mesh mesh(test, settings.GetResolution());


    mesh.GenerateSquare(10);
    mesh.Debug();
}

