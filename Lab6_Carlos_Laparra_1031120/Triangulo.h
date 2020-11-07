#pragma once
#include "Figuras.h"
class Triangulo :
	public Figuras
{
public:
	Triangulo() {};
	~Triangulo() {};
	double ObtenerArea() override;
	double ObtenerPerimetro() override;
};

