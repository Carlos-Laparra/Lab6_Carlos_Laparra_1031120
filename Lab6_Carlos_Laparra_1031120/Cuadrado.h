#pragma once
#include "Figuras.h"
class Cuadrado :
	public Figuras		
{
public:
	Cuadrado() {};
	~Cuadrado() {};
	double ObtenerArea() override;
	double ObtenerPerimetro() override;
};

