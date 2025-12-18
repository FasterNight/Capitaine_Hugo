#pragma once
#include "Mesh.h"


class Light
{
	
	Vertex m_lightVertex;

public:
	Light(Settings const& settings);
	Vertex GetLightVertex() { return m_lightVertex; }
	~Light() = default;

};

