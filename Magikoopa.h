#include <iostream>
#include <string>
#include <vector>
#include "Range.h"

using namespace std;

#ifndef MAGIKOOPA_H
#define MAGIKOOPA_H
class Magikoopa : Range{
	protected:
		string Color;
		int HP;
		int Defensa;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		Magikoopa(string,int,int,int,int,bool);
		Magikoopa();
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