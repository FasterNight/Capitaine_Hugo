#ifndef SETTINGS_H
#define SETTINGS_H

class Settings
{
public:
	Settings(int height, int width);

	int GetHeight();
	int GetWidth();

private:

	int mHeight;
	int mWidth;
};


#endif // !SETTINGS_H
