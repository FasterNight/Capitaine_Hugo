#ifndef SETTINGS_H
#define SETTINGS_H

class Settings
{
public:
	Settings(int argc, char* argv[]);

	int GetHeight();
	int GetWidth();
	int GetResolution();

	void TextHelp();


private:

	int mHeight;
	int mWidth;
	int mMeshResolution;
};


#endif // !SETTINGS_H
