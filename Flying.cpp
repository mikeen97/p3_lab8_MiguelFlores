#include "Flying.h"

Flying::Flying(string Id,string Nombre,int Ganadas,int Experiencia,int Vuelo):Minion(Id, Nombre, Ganadas, Experiencia){
	this->Vuelo=Vuelo;
}
Flying::Flying(){

}void Flying::setVuelo(int Vuelo){
   this-> Vuelo=Vuelo;
}
int Flying::getVuelo(){
   return Vuelo;
}
