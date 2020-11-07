#include "Rectangulo.h"

double Rectangulo::ObtenerArea() {
	return base * altura;
}

double Rectangulo::ObtenerPerimetro() {
	return (2 * base) + (2 * altura);
}
