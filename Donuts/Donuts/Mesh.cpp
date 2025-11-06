#include "pch.h"
#include "Mesh.h"

Mesh::Mesh(std::vector<Vertex> vertex)
{
	for (int i = 0; i < vertex.size(); i++)
	{
		mVertex.push_back(vertex[i]);

	}
}

void Mesh::Debug()
{
	for (int i = 0; i < mVertex.size(); i++)
	{
		std::cout << "|=====================|DEBUG|=======================|" << std::endl;
		std::cout << BLUE << "Vertex " << i + 1 << DEFAULT << ": X = " << mVertex[i].x << ", Y = " << mVertex[i].y << ", Z = " << mVertex[i].z << std::endl;
	}
}
