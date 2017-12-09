#include "HammerBro.h"
#include "Melee.h"
#include "ChainChop.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "Magikoopa.h"
#include "Goomba.h"

HammerBro::HammerBro(string Id,string Nombre,int Ganadas,int Experiencia,int Rango,string tamano,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial):Range(Id, Nombre, Ganadas, Experiencia, Rango){
	this->tamano=tamano;
	this->HP=HP;
	this->Defensa=Defensa;
	this->Velocidad=Velocidad;
	this->Fuerza=Fuerza;
	this->Especial=Especial;
}
HammerBro::HammerBro(){

}void HammerBro::setTamano(string tamano){
   this-> tamano=tamano;
}
string HammerBro::getTamano(){
   return tamano;
}
void HammerBro::setHP(int HP){
   this-> HP=HP;
}
int HammerBro::getHP(){
   return HP;
}
void HammerBro::setDefensa(int Defensa){
   this-> Defensa=Defensa;
}
int HammerBro::getDefensa(){
   return Defensa;
}
void HammerBro::setVelocidad(int Velocidad){
   this-> Velocidad=Velocidad;
}
int HammerBro::getVelocidad(){
   return Velocidad;
}
void HammerBro::setFuerza(int Fuerza){
   this-> Fuerza=Fuerza;
}
int HammerBro::getFuerza(){
   return Fuerza;
}
void HammerBro::setEspecial(bool Especial){
   this-> Especial=Especial;
}
bool HammerBro::getEspecial(){
   return Especial;
}
void HammerBro::ataque(Minion* vrs){
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

