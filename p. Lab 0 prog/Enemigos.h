#include <iostream>
using namespace std;
#pragma once
class Enemigos
{
public:
		int velocidad;
	int posicionX;
	int posicionY;
	int tama�o;
	int direccion;
	void eliminar();
	void escapar();
	void moverse(int direccionX, int direccionY);
private:
string Nombre;

};

