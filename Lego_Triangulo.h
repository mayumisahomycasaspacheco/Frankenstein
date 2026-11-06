#pragma once
#include "Lego.h"

ref class Lego_Triangulo : public Lego
{
private:
public:
	Lego_Triangulo(int x_inicial, int y_incial, int x_final, int y_final, int ancho, int alto, int color);
	~Lego_Triangulo();
	void dibujar(Graphics^ graphics) override;
};

Lego_Triangulo::Lego_Triangulo(int x_inicial, int y_inicial, int x_final, int y_final, int ancho, int alto, int color) : Lego(x_inicial, y_inicial, x_final, y_final, ancho, alto, color)
{
	//No tenemos parametros nuevos
}

Lego_Triangulo::~Lego_Triangulo()
{
	//Destructor vacio
}

void Lego_Triangulo::dibujar(Graphics^ graphics)
{
	Color color_triangulo = ColorTranslator::FromWin32(color);
	SolidBrush^ brocha = gcnew SolidBrush(color_triangulo);
	array<Point>^ puntos = { Point(x + ancho / 2, y), Point(x, y + alto), Point(x + ancho, y + alto)};
	graphics->FillPolygon(brocha, puntos);
}