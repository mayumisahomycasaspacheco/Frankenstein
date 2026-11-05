#pragma once
#include "Lego.h"

using namespace System::Drawing;

ref class Lego_Elipse : public Lego
{
private:
public:
	Lego_Elipse(int x_inicial, int y_inicial, int x_final, int y_final, int ancho, int alto, int color);
	~Lego_Elipse();

	void dibujar(Graphics^ graphics) override;
};

Lego_Elipse::Lego_Elipse(int x_inicial, int y_inicial, int x_final, int y_final, int ancho, int alto, int color) : Lego(x_inicial, y_inicial, x_final, y_final, ancho, alto, color)
{
	//Vacio porque no tenemos nuevos parametros
}

Lego_Elipse::~Lego_Elipse()
{
	//Destructor vacio
}

void Lego_Elipse::dibujar(Graphics^ graphics)
{
	Color color_elipse = ColorTranslator::FromWin32(color);
	SolidBrush^ brocha = gcnew SolidBrush(color_elipse);
	graphics->FillEllipse(brocha, x, y, ancho, alto);
}