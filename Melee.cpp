#include "Melee.h"

Melee::Melee(int Intimidacion){
	this->Intimidacion=Intimidacion;
}
Melee::Melee(){

}void Melee::setIntimidacion(int Intimidacion){
   this-> Intimidacion=Intimidacion;
}
int Melee::getIntimidacion(){
   return Intimidacion;
}
