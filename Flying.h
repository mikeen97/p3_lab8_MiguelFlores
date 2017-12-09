#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"

using namespace std;

#ifndef FLYING_H
#define FLYING_H
class Flying : public Minion{
	protected:
		int Vuelo;
	public:
		Flying(string,string,int,int,int);
		Flying();
		int getVuelo();
		void setVuelo(int);

};
#endif