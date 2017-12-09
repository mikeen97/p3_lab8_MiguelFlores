#include "Goomba.h"
#include "Melee.h"
#include "ChainChop.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "HammerBro.h"
#include "Magikoopa.h"




Goomba::Goomba(string Id,string Nombre,int Ganadas,int Experiencia,int Intimidacion,int tamano,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial):Melee(Id, Nombre, Ganadas, Experiencia, Intimidacion){
	this->tamano=tamano;                                                   
	this->HP=HP;
	this->Defensa=Defensa;
	this->Velocidad=Velocidad;
	this->Fuerza=Fuerza;
	this->Especial=Especial;
}
Goomba::Goomba(){

}
void Goomba::setTamano(int tamano){
   this-> tamano=tamano;
}
int Goomba::getTamano(){
   return tamano;
}
void Goomba::setHP(int HP){
   this-> HP=HP;
}
int Goomba::getHP(){
   return HP;
}
void Goomba::setDefensa(int Defensa){
   this-> Defensa=Defensa;
}
int Goomba::getDefensa(){
   return Defensa;
}
void Goomba::setVelocidad(int Velocidad){
   this-> Velocidad=Velocidad;
}
int Goomba::getVelocidad(){
   return Velocidad;
}
void Goomba::setFuerza(int Fuerza){
   this-> Fuerza=Fuerza;
}
int Goomba::getFuerza(){
   return Fuerza;
}
void Goomba::setEspecial(bool Especial){
   this-> Especial=Especial;
}
bool Goomba::getEspecial(){
   return Especial;
}

void Goomba::ataque(Minion* vrs){//melee
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
