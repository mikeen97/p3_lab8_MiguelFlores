#include <iostream>
#include <string>
#include <vector>
#include "Range.h"

using namespace std;

#ifndef HAMMERBRO_H
#define HAMMERBRO_H
class HammerBro : public Range{
	protected:
		string tamano;
		int HP;
		int Defensa;
		int Velocidad;
		int Fuerza;
		bool Especial;
	public:
		HammerBro(string,string,int,int,int,string,int,int,int,int,bool);
		HammerBro();
		string getTamano();
		void setTamano(string);

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
		//void write(ofstream&);
		//void read(ifstream&);		

};
#endif