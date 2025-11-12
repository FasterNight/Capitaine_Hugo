#ifndef SCREEN_H
#define SCREEN_H

#include "Mesh.h"

class Screen
{

public:
	Screen();
	Screen(int height, int width);

	void Display();
	void Display(Mesh const& mesh);
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



