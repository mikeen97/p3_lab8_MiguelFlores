#include <iostream>
#include <string>
#include <vector>
#include "Melee.h"

using namespace std;

#ifndef GOOMBA_H
#define GOOMBA_H
class Goomba : Melee{
	protected:
		int tamano;
		int HP;
		int Defensa;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		Goomba(int,int,int,int,int,bool);
		Goomba();
		int getTamano();
		void setTamano(int);

		int getHP();
		void setHP(int);

		int getDefensa();
		void setDefensa(int);

		int getVelocidad();
		void setVelocidad(int);

		int getFuerza();
		void setFuerza(int);

		bool getEspecial();
		void setEspecial(bool);

};
#endif