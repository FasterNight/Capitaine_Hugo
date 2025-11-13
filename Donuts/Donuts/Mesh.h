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
	Mesh();
	Mesh(std::vector<Vertex> vertex, int resolution);

	void GenerateCircle(float radius);
	void GenerateHalfCircle(float radius);
	void GenerateRectangle(float width, float height);
	void GenerateSquare(float size);

	char* GetMesh();

	void Debug();
private:

	char* mMesh;

	std::vector<Vertex> mVertex;
};

#endif // !MESH_H


