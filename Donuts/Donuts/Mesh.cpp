#include "pch.h"
#include "Mesh.h"

Mesh::Mesh(std::vector<Vertex> vertex, int resolution)
{
	for (int i = 0; i < vertex.size(); i++)
	{
		mVertex.push_back(vertex[i]);
	}
}

Mesh const& Mesh::GenerateCircle(float radius)
{
	

	for (int i = 0; i <= 2 * radius; i++)
	{
		for (int j = 0; j <= 2 * radius; j++)
		{
			double distance = sqrt((double)(i - radius) * (i - radius) + (j - radius) * (j - radius));
			if (distance > radius - 0.65 && distance < radius + 0.2)
			{
				mMesh += 'X';
			}
			else
			{
				mMesh += ' ';
			}
		}
		mMesh += '\n';
	}

	return *this;
}

Mesh const& Mesh::GenerateHalfCircle(float radius)
{


}

Mesh const& Mesh::GenerateRectangle(float width, float height)
{

	for (int i = 1; i < width; i++) 
	{
		for (int j = 1; j < height; j++) 
		{
			mMesh += 'X';
		}
		mMesh += '\n';
	}

	return *this;
}

Mesh const& Mesh::GenerateSquare(float size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = 1; j < size; j++)
		{
			mMesh += 'X';
		}
		mMesh += '\n';
	}

	return *this;
}

char* Mesh::GetMesh()
{
	return mMesh;
}

void Mesh::Debug()
{
	for (int i = 0; i < mVertex.size(); i++)
	{
		std::cout << "|=====================|DEBUG|=======================|" << std::endl;
		std::cout << BLUE << "Vertex " << i + 1 << DEFAULT << ": X = " << mVertex[i].x << ", Y = " << mVertex[i].y << ", Z = " << mVertex[i].z << std::endl;
	}
}
