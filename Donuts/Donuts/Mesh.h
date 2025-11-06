#ifndef MESH_H
#define MESH_H


class Mesh
{
public:
	Mesh(std::vector<Vertex> vertex);

	void Debug();
private:

	std::vector<Vertex> mVertex;
};

#endif // !MESH_H


