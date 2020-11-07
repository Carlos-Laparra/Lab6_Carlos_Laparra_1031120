#pragma once
#include "Figuras.h"
class Rectangulo :
	public Figuras
{
public:
	Rectangulo() {};
	~Rectangulo() {};
	double ObtenerArea() override;
	double ObtenerPerimetro() override;
};

