#pragma once
#include <cstdio>
#include <vector>

class Settings;
class Light;

enum class Axis
{
    X,
    Y,
    Z
};

struct Vertex
{
    void Rotate(float angle, Axis axis);
    float ComputeIllumination(Light const& light) const;
    void Debug() const { std::printf("[x=%5.2f, y=%5.2f, z=%5.2f]\t[nx=%5.2f, ny=%5.2f, nz=%5.2f]\n", x, y, z, nx, ny, nz); }
    float x;
    float y;
    float z;
    float nx;
    float ny;
    float nz;

    const char* colorANSI;
};

class Mesh
{
    public:
    Mesh(Settings const& settings);
    std::vector<Vertex> const& GetVertices() const { return m_vertices; }
    void GenerateCircle(float radius);
    void GenerateHalfCircle(float radius);
    void GenerateRectangle(float width, float height);
    void GenerateSquare(float side);
    void GenerateTorus(float majorRadius, float minorRadius);
    void GenerateCylinder(float radius, float width);
    void Rotate(float angle, Axis axis);
    void Debug() const;

    private:
    void _GenerateSector(float radius, float angle);

    private:
    std::vector<Vertex> m_vertices;
    int m_resolution;

    const char* m_ansiColors[12] = {
        "\033[38;5;196m", "\033[38;5;202m", "\033[38;5;208m", "\033[38;5;214m",
        "\033[38;5;220m", "\033[38;5;226m", "\033[38;5;118m", "\033[38;5;82m",
        "\033[38;5;46m",  "\033[38;5;51m",  "\033[38;5;39m",  "\033[38;5;21m"
    };

};