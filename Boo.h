#include <iostream>
#include <string>
#include <vector>
#include "Flying.h"

using namespace std;

#ifndef BOO_H
#define BOO_H
class Boo : Flying{
	protected:
		string Color;
		int HP;
		int Defensa;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		Boo(string,int,int,int,int,bool);
		Boo();
		string getColor();
		void setColor(string);

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