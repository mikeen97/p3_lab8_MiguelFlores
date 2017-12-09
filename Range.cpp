#include "Range.h"

Range::Range(string Id,string Nombre,int Ganadas,int Experiencia,int Rango):Minion(Id, Nombre, Ganadas, Experiencia){
	this->Rango=Rango;
}
Range::Range(){

}void Range::setRango(int Rango){
   this-> Rango=Rango;
}
int Range::getRango(){
   return Rango;
}
