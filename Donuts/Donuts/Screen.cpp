#include <iostream>
#include "Screen.h"
#include "Settings.h"

Screen::Screen(Settings const& settings)
    : m_width(settings.GetScreenWidth())
    , m_height(settings.GetScreenHeight())
    , m_pixels(m_width* m_height, '.')
    , m_ScreenBackground(' ')
    , m_ScreenMeshProjection('X')
    ,m_ScreenPosition(3.33)
    , m_MeshPosition(5)

{
}

void Screen::Display() const
{
    for (int i = 0; i < m_height; i++)
    {
        for (int j = 0; j < m_width; j++)
        {
            std::cout << m_pixels[m_width * i + j];
        }
        std::cout << std::endl;
    }
}

void Screen::Display(Mesh const& mesh)
{
    std::vector<Vertex> tempVertices = mesh.GetVertices();

    for (int i = 0; i < mesh.GetVertices().size(); i++)
    {
        tempVertices[i].z += m_MeshPosition;
        tempVertices[i].y = (tempVertices[i].y * m_ScreenPosition) / tempVertices[i].z;
        tempVertices[i].x = (tempVertices[i].x * m_ScreenPosition) / tempVertices[i].z;

        if (tempVertices[i].x )
        {
            int index;
            m_pixels[index, m_ScreenMeshProjection];

        }
    }

    Display();
}
