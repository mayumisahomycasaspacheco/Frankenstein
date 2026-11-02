#pragma once
//Clase Padre
using namespace System::Drawing; //Para poder usar Graphics^, Color, etc

public ref class Lego
{
protected:
	int x, y; //Posición Actual
	int x_inicial, y_inicial;
	int x_final, y_final;
	int ancho, alto;
	int color;
public:
	Lego(int x_inicial, int y_inicial, int x_final, int y_final, int ancho, int alto, int color);
	~Lego();
};

Lego::Lego(int x_inicial, int y_inicial, int x_final, int y_final, int ancho, int alto, int color)
{
	this->x = x_inicial;
	this->y = y_inicial;
	this->x_inicial = x_inicial;
	this->y_inicial = y_inicial;
	this->x_final = x_final;
	this->y_final = y_final;
	this->alto = alto;
	this->color = color;
	this->ancho = ancho;
}

Lego::~Lego()
{
	//Destructor vacio
}