#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"

using namespace std;

#ifndef RANGE_H
#define RANGE_H
class Range : public Minion{
	protected:
		int Rango;
	public:
		Range(string,string,int,int,int);
		Range();
		int getRango();
		void setRango(int);

};
#endif