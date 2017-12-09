#include "Melee.h"

Melee::Melee(string Id,string Nombre,int Ganadas,int Experiencia,int Intimidacion):Minion(Id, Nombre, Ganadas, Experiencia){
	this->Intimidacion=Intimidacion;
}
Melee::Melee(){

}void Melee::setIntimidacion(int Intimidacion){
   this-> Intimidacion=Intimidacion;
}
int Melee::getIntimidacion(){
   return Intimidacion;
}
