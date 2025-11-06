#ifndef SCREEN_H
#define SCREEN_H

class Screen
{

public:
	Screen();
	Screen(int height, int width);

	void Display();
	void Clear();

	void SetHeight(int height);
	void SetWidth(int width);

	int GetHeight();
	int GetWidth();
private:

	int mHeight;
	int mWidth;
};
#endif // !SCREEN_H



