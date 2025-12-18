#include "Light.h"
#include "Settings.h"


Light::Light(Settings const& settings)
{
	m_lightVertex.x = 0.0f;
	m_lightVertex.y = 0.0f;
	m_lightVertex.z = 0.0f;

	m_lightVertex.nx = settings.GetLightX();
	m_lightVertex.ny = settings.GetLightY();
	m_lightVertex.nz = settings.GetLightZ();

	
}
