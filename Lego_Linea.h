#pragma once
#include "Lego.h"

using namespace System::Drawing;

ref class Lego_Linea : public Lego
{
private:
public:
	Lego_Linea(int x_inicial, int y_inicial, int x_final, int y_final, int ancho, int alto, int color);
	~Lego_Linea();

	virtual void dibujar(Graphics^ graphics) override;
};

Lego_Linea::Lego_Linea(int x_inicial, int y_inicial, int x_final, int y_final, int ancho, int alto, int color) : Lego(x_inicial, y_inicial, x_final, y_final, ancho, alto, color)
{
	//Vacio porque no tenemos nuevos parametros
}

Lego_Linea::~Lego_Linea()
{
	//Destructor vacio
}

void Lego_Linea::dibujar(Graphics^ graphics)
{
	Color color_linea = ColorTranslator::FromWin32(color);
	Pen^ lapiz = gcnew Pen(color_linea, 4.0f);
	graphics->DrawLine(lapiz, x, y, x + ancho, y + alto);
	delete lapiz;
}