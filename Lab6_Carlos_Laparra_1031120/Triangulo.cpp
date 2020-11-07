using namespace System;
#include "Triangulo.h"


double Triangulo::ObtenerArea() {
	return (base * altura)/2;
}

double Triangulo::ObtenerPerimetro() {
	double ll = (altura * altura) - ((base / 2) * (base / 2));
	lado = Math::Sqrt(ll);
	return base + (2 * lado);
}
