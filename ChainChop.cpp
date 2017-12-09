#include "ChainChop.h"

ChainChop::ChainChop(string Id,string Nombre,int Ganadas,int Experiencia,int Intimidacion,string color,int HP,int Velocidad,int Fuerza,bool Especial):Melee(Id, Nombre, Ganadas, Experiencia, Intimidacion){
	this->color=color;
	this->HP=HP;
	this->Velocidad=Velocidad;
	this->Fuerza=Fuerza;
	this->Especial=Especial;
}
ChainChop::ChainChop(){

}void ChainChop::setColor(string color){
   this-> color=color;
}
string ChainChop::getColor(){
   return color;
}
void ChainChop::setHP(int HP){
   this-> HP=HP;
}
int ChainChop::getHP(){
   return HP;
}
void ChainChop::setVelocidad(int Velocidad){
   this-> Velocidad=Velocidad;
}
int ChainChop::getVelocidad(){
   return Velocidad;
}
void ChainChop::setFuerza(int Fuerza){
   this-> Fuerza=Fuerza;
}
int ChainChop::getFuerza(){
   return Fuerza;
}
void ChainChop::setEspecial(bool Especial){
   this-> Especial=Especial;
}
bool ChainChop::getEspecial(){
   return Especial;
}
void ChainChop::ataque(Minion* vrs){
   /*
   int atacar=0;
   if (!dynamic_cast<Flying*>(vrs)){
      atacar= Fuerza- vrs->getDefensa();
      int vida= vrs->getHP();
      vrs->setHP(vida-atacar);
   }else{
      atacar= (Fuerza*0.50)- vrs->getDefensa();
      int vida= vrs->getHP();
      vrs->setHP(vida-atacar);
   }*/
}

