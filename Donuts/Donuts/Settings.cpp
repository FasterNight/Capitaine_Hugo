#include "pch.h"
#include "Settings.h"


Settings::Settings(int argc, char* argv[])
{
    for (int i = 1; i < argc; ++i)
    {
        std::string arg = argv[i];

        if (arg == "-h" && i + 1 < argc)
        {
            mHeight = atoi(argv[i + 1]);
            i++;
        }
        else if (arg == "-w" && i + 1 < argc)
        {
            mWidth = atoi(argv[i + 1]);
            i++;
        }
        else if (arg == "-r" && i + 1 < argc)
        {
            mMeshResolution = atoi(argv[i + 1]);
            i++;
        }
        else
        {
            TextHelp();
            return;
        }
    }

    if (mHeight == NULL || mWidth == NULL)
    {
        TextHelp();
        return;
    }
    else if (mMeshResolution == NULL)
    {
        mMeshResolution = 32;
    }
}

int Settings::GetHeight()
{
	return mHeight;
}

int Settings::GetWidth()
{
	return mWidth;
}

int Settings::GetResolution()
{
    return mMeshResolution;
}

void Settings::TextHelp()
{
	std::cout << "|=====================|HELP|=======================|" << std::endl;
	std::cout << "Use " << RED << "-h " << DEFAULT << "for set the height and " << RED << "-w " DEFAULT << "for set the width !" << std::endl;
	std::cout << "\n";
	std::cout << GREEN << "[EXEMPLE] -h 20 -w 100" << DEFAULT << std::endl;
}

