#include <iostream>
#include <string>
#include <vector>
#include "Melee.h"

using namespace std;

#ifndef CHAINCHOP_H
#define CHAINCHOP_H
class ChainChop :public  Melee{
	protected:
		string color;
		int HP;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		ChainChop(string,string,int,int,int,string,int,int,int,bool);
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

		virtual void ataque(Minion*);

		//Operaciones de Archivos
	//	void write(ofstream&);
	//	void read(ifstream&);
};
#endif