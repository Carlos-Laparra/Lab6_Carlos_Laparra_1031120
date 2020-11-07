#pragma once
class Figuras
{
public:
	double base;
	double altura;
	double lado;
	int type;
	double area;
	double perimetro;

	Figuras() { base = 0; altura = 0; type = 0; area = 0; perimetro = 0; };
	~Figuras() {};
	virtual double ObtenerArea();
	virtual double ObtenerPerimetro();
};

