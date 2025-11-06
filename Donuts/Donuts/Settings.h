#ifndef SETTINGS_H
#define SETTINGS_H

class Settings
{
public:
	Settings(int argc, char* argv[]);

	int GetHeight();
	int GetWidth();

	void TextHelp();


private:

	int mHeight;
	int mWidth;
};


#endif // !SETTINGS_H
