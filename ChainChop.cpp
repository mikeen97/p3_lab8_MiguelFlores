#include "ChainChop.h"
#include "Melee.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "HammerBro.h"
#include "Magikoopa.h"
#include "Goomba.h"


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
   int atacar=0;
   if (dynamic_cast<Goomba*>(vrs)){//melee
      atacar= Fuerza- dynamic_cast<Goomba*>(vrs)->getDefensa();
      int vida= dynamic_cast<Goomba*>(vrs)->getHP();
      dynamic_cast<Goomba*>(vrs)->setHP(vida-atacar);
   }
   if (dynamic_cast<ChainChop*>(vrs)){//melee
      atacar= Fuerza- dynamic_cast<ChainChop*>(vrs)->getFuerza();
      int vida= dynamic_cast<ChainChop*>(vrs)->getHP();
      dynamic_cast<ChainChop*>(vrs)->setHP(vida-atacar);
   }
   if (dynamic_cast<Boo*>(vrs)){//flying
      atacar= Fuerza- dynamic_cast<Boo*>(vrs)->getDefensa();
      int vida= dynamic_cast<Boo*>(vrs)->getHP();
      dynamic_cast<Boo*>(vrs)->setHP(vida-atacar);
   }
   if (dynamic_cast<Paratroopa*>(vrs)){//flying
      atacar= Fuerza- dynamic_cast<Paratroopa*>(vrs)->getDefensa();
      int vida= dynamic_cast<Paratroopa*>(vrs)->getHP();
      dynamic_cast<Paratroopa*>(vrs)->setHP(vida-atacar);
   }
   if (dynamic_cast<HammerBro*>(vrs)){//range
      atacar= Fuerza- dynamic_cast<HammerBro*>(vrs)->getDefensa();
      int suma= atacar*0.50;
      atacar+=suma;
      int vida= dynamic_cast<HammerBro*>(vrs)->getHP();
      dynamic_cast<HammerBro*>(vrs)->setHP(vida-atacar);
   }           
   if (dynamic_cast<Magikoopa*>(vrs)){//range
      atacar= Fuerza- dynamic_cast<Magikoopa*>(vrs)->getDefensa();
      int suma= atacar*0.50;
      atacar+=suma;      
      int vida= dynamic_cast<Magikoopa*>(vrs)->getHP();
      dynamic_cast<Magikoopa*>(vrs)->setHP(vida-atacar);
   }               
}


