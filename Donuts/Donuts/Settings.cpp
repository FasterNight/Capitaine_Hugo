#include "Settings.h"
#include <iostream>


Settings::Settings(int height, int width)
{
	mHeight = height;
	mWidth = width;
}

int Settings::GetHeight()
{
	return mHeight;
}

int Settings::GetWidth()
{
	return mWidth;
}

