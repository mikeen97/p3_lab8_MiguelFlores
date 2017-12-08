#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"

using namespace std;

#ifndef FLYING_H
#define FLYING_H
class Flying : Minion{
	protected:
		int Vuelo;
	public:
		Flying(int);
		Flying();
		int getVuelo();
		void setVuelo(int);

};
#endif