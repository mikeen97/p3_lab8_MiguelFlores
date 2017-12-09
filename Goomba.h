#include <iostream>
#include <string>
#include <vector>
#include "Melee.h"
#pragma once


using namespace std;

#ifndef GOOMBA_H
#define GOOMBA_H

class Goomba : public Melee{
	protected:
		int tamano;
		int HP;
		int Defensa;
		int Velocidad;
		int Fuerza;
		bool Especial;

	public:
		Goomba(string,string,int,int,int,int,int,int,int,int,bool);
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

		void ataque(Minion*);
		//Operaciones de Archivos
		//void write(ofstream&);
		//void read(ifstream&);		

		//virtual ~Goomba();
};
#endif