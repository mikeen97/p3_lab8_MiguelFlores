#include "Paratroopa.h"
#include "Melee.h"
#include "ChainChop.h"
#include "Boo.h"
#include "Goomba.h"
#include "HammerBro.h"
#include "Magikoopa.h"

Paratroopa::Paratroopa(string Id,string Nombre,int Ganadas,int Experiencia,int Vuelo,string Color,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial):Flying(Id, Nombre, Ganadas, Experiencia, Vuelo){
	this->Color=Color;
	this->HP=HP;
	this->Defensa=Defensa;
	this->Velocidad=Velocidad;
	this->Fuerza=Fuerza;
	this->Especial=Especial;
}
Paratroopa::Paratroopa(){

}void Paratroopa::setColor(string Color){
   this-> Color=Color;
}
string Paratroopa::getColor(){
   return Color;
}
void Paratroopa::setHP(int HP){
   this-> HP=HP;
}
int Paratroopa::getHP(){
   return HP;
}
void Paratroopa::setDefensa(int Defensa){
   this-> Defensa=Defensa;
}
int Paratroopa::getDefensa(){
   return Defensa;
}
void Paratroopa::setVelocidad(int Velocidad){
   this-> Velocidad=Velocidad;
}
int Paratroopa::getVelocidad(){
   return Velocidad;
}
void Paratroopa::setFuerza(int Fuerza){
   this-> Fuerza=Fuerza;
}
int Paratroopa::getFuerza(){
   return Fuerza;
}
void Paratroopa::setEspecial(bool Especial){
   this-> Especial=Especial;
}
bool Paratroopa::getEspecial(){
   return Especial;
}
void Paratroopa::ataque(Minion* vrs){
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
