#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"

using namespace std;

#ifndef MELEE_H
#define MELEE_H
class Melee : public Minion{
	protected:
		int Intimidacion;
	public:
		Melee(string,string,int,int,int);
		Melee();
		int getIntimidacion();
		void setIntimidacion(int);
		
		virtual void ataque(Minion*)=0;

};
#endif