#include "pch.h"

int main(int argc, char* argv[])
{
    Settings settings(argc, argv); // Constructeur du tableau 
    Screen screen(settings.GetHeight(), settings.GetWidth());
}

