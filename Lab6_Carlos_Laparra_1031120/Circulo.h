#pragma once
#include "Figuras.h"
class Circulo :
	public Figuras
{
public:
	Circulo() {};
	~Circulo() {};
	double ObtenerArea() override;
	double ObtenerPerimetro() override;
};

