#pragma once
#include "Lego.h"

ref class Controladora
{
private:
	array<Lego^>^ piezas;
	int n;
public:
	Controladora();
	~Controladora();

	void agregar(Lego^ piezas);
	void dibujar_todo(Graphics^ graphics);
	void mover_todo(bool armado);
};

Controladora::Controladora()
{
	piezas = gcnew array<Lego^>(50);
	n = 0;
}

Controladora::~Controladora()
{
	//Destrcutor vacio
}

void Controladora::agregar(Lego^ pieza)
{
	piezas[n] = pieza;
	n++;
}

void Controladora::dibujar_todo(Graphics^ graphics)
{
	for (int i = 0; i < n; i++)
	{
		piezas[i]->dibujar(graphics);
	}
}

void Controladora::mover_todo(bool armado)
{
	for (int i = 0; i < n; i++)
	{
		piezas[i]->mover(armado);
	}
}