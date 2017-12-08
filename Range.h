#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"

using namespace std;

#ifndef RANGE_H
#define RANGE_H
class Range : Minion{
	protected:
		int Rango;
	public:
		Range(int);
		Range();
		int getRango();
		void setRango(int);

};
#endif