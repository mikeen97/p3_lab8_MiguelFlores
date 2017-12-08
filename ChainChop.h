#include <iostream>
#include <string>
#include <vector>
#include "Melee.h"

using namespace std;

#ifndef CHAINCHOP_H
#define CHAINCHOP_H
class ChainChop : Melee{
	protected:
		string color;
		int HP;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		ChainChop(string,int,int,int,bool);
		ChainChop();
		string getColor();
		void setColor(string);

		int getHP();
		void setHP(int);

		int getVelocidad();
		void setVelocidad(int);

		int getFuerza();
		void setFuerza(int);

		bool getEspecial();
		void setEspecial(bool);

};
#endif