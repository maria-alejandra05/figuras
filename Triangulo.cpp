#include "Triangulo.h"

Triangulo::Triangulo(float b, float h, float x, float y)
{
    _base = b;
    _altura = h;
    setX( x );
    setY( y );
}

Triangulo::Triangulo() {}

float Triangulo::area() {return _base * _altura / 2.;}
float Triangulo::perimetro() {return 3 * _base;}
