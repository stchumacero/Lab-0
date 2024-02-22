#include <iostream>
using namespace std;
#pragma once
class Personaje
{
public:

	int posicionX;
  int posicionY;
  int tamaño;
	int direccion;
	int velocidad;
	void moverse (int direccionX, int direccionY);
	void comer();
	void potenciar();

private:
	



};

