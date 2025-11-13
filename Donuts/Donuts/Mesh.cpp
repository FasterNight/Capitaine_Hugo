#include "pch.h"
#include "Mesh.h"

Mesh::Mesh(std::vector<Vertex> vertex, int resolution)
{
	for (int i = 0; i < vertex.size(); i++)
	{
		mVertex.push_back(vertex[i]);
	}
}

void Mesh::GenerateCircle(float radius)
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

}

void Mesh::GenerateHalfCircle(float radius)
{


}

void Mesh::GenerateRectangle(float width, float height)
{

	mVertex.resize(width + height);
	for (int i = 1; i < width; i++) 
	{
		for (int j = 1; j < height; j++) 
		{
			mVertex[i + j].x = i;
			mVertex[i + j].y = j;
			mVertex[i + j].z = 0;
		}
	}

}

void Mesh::GenerateSquare(float size)
{
	GenerateRectangle(size, size);
}

char* Mesh::GetMesh()
{
	return mMesh;
}

void Mesh::Debug()
{
	std::cout << "|=====================|DEBUG|=======================|" << std::endl;

	for (int i = 0; i < mVertex.size(); i++)
	{
		std::cout << GREEN << "Vertex " << i + 1 << DEFAULT << ": X = " << mVertex[i].x << ", Y = " << mVertex[i].y << ", Z = " << mVertex[i].z << std::endl;
	}
}
