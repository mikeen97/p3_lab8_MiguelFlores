#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef MINION_H
#define MINION_H
class Minion{
	protected:
		string Id;
		string Nombre;
		int Ganadas;
		int Experiencia;
	public:
		Minion(string,string,int,int);
		Minion();
		string getId();
		void setId(string);

		string getNombre();
		void setNombre(string);

		int getGanadas();
		void setGanadas(int);

		int getExperiencia();
		void setExperiencia(int);

};
#endif