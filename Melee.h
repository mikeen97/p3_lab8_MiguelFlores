#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"

using namespace std;

#ifndef MELEE_H
#define MELEE_H
class Melee : Minion{
	protected:
		int Intimidacion;
	public:
		Melee(int);
		Melee();
		int getIntimidacion();
		void setIntimidacion(int);

};
#endif