#include "Circulo.h"

double Circulo::ObtenerArea() {
	return 3.1416 * (lado * lado);
}

double Circulo::ObtenerPerimetro() {
	return 2 * 3.1416 * lado;
}
