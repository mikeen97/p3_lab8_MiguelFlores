#include <iostream>
#include <string>
#include <vector>
#include "Flying.h"
#pragma once


using namespace std;

#ifndef BOO_H
#define BOO_H
class Boo : public Flying{
	protected:
		string Color;
		int HP;
		int Defensa;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		Boo(string,string,int,int,int,string,int,int,int,int,bool);
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

		virtual void ataque(Minion*);
		//Operaciones de Archivos
		//virtual void write(ofstream&);
		//virtual void read(ifstream&);		

};
#endif