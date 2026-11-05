#pragma once
#include "Lego.h"

using namespace System::Drawing;

ref class Lego_Rectangulo : public Lego
{
private:
public:
	Lego_Rectangulo(int x_inicial, int y_inicial, int x_final, int y_final, int ancho, int alto, int color);
	~Lego_Rectangulo();

	void dibujar(Graphics^ graphics) override;
};

Lego_Rectangulo::Lego_Rectangulo(int x_inicial, int y_inicial, int x_final, int y_final, int ancho, int alto, int color) : Lego(x_inicial, y_inicial, x_final, y_final, ancho, alto, color)
{
	//Vacio porque no tenemos nuevos parametros
}

Lego_Rectangulo::~Lego_Rectangulo()
{
	//Destructor vacio
}

void Lego_Rectangulo::dibujar(Graphics^ graphics)
{
	Color color_rectangulo = ColorTranslator::FromWin32(color);
	SolidBrush^ brocha = gcnew SolidBrush(color_rectangulo);
	graphics->FillRectangle(brocha, x, y, ancho, alto);
}