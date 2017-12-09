#include "Magikoopa.h"
#include "Melee.h"
#include "ChainChop.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "HammerBro.h"
#include "Goomba.h"

Magikoopa::Magikoopa(string Id,string Nombre,int Ganadas,int Experiencia,int Rango,string Color,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial):Range(Id, Nombre, Ganadas, Experiencia, Rango){
	this->Color=Color;
	this->HP=HP;
	this->Defensa=Defensa;
	this->Velocidad=Velocidad;
	this->Fuerza=Fuerza;
	this->Especial=Especial;
}
Magikoopa::Magikoopa(){

}void Magikoopa::setColor(string Color){
   this-> Color=Color;
}
string Magikoopa::getColor(){
   return Color;
}
void Magikoopa::setHP(int HP){
   this-> HP=HP;
}
int Magikoopa::getHP(){
   return HP;
}
void Magikoopa::setDefensa(int Defensa){
   this-> Defensa=Defensa;
}
int Magikoopa::getDefensa(){
   return Defensa;
}
void Magikoopa::setVelocidad(int Velocidad){
   this-> Velocidad=Velocidad;
}
int Magikoopa::getVelocidad(){
   return Velocidad;
}
void Magikoopa::setFuerza(int Fuerza){
   this-> Fuerza=Fuerza;
}
int Magikoopa::getFuerza(){
   return Fuerza;
}
void Magikoopa::setEspecial(bool Especial){
   this-> Especial=Especial;
}
bool Magikoopa::getEspecial(){
   return Especial;
}
void Magikoopa::ataque(Minion* vrs) {
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

