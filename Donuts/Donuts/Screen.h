#pragma once
#include "Mesh.h"
#include <vector>

class Settings;

class Screen
{
public:
    Screen(Settings const& settings);
    void Display() const;
    void Display(Mesh const& mesh);

private:
    int m_width;
    int m_height;
    std::vector<char> m_pixels;
    char m_ScreenBackground;
    char m_ScreenMeshProjection;
    float m_ScreenPosition;
    float m_MeshPosition;
};