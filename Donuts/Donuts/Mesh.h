#ifndef MESH_H
#define MESH_H

#include <vector>

struct Vertex
{
	float x;
	float y;
	float z;
};

class Mesh
{
public:
	Mesh(std::vector<Vertex> vertex, int resolution);

	Mesh const& GenerateCircle(float radius);
	Mesh const& GenerateHalfCircle(float radius);
	Mesh const& GenerateRectangle(float width, float height);
	Mesh const& GenerateSquare(float size);

	char* GetMesh();

	void Debug();
private:

	char* mMesh;

	std::vector<Vertex> mVertex;
};

#endif // !MESH_H


