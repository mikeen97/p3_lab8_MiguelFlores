#include "Goomba.h"

Goomba::Goomba(int tamano,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial){
	this->tamano=tamano;
	this->HP=HP;
	this->Defensa=Defensa;
	this->Velocidad=Velocidad;
	this->Fuerza=Fuerza;
	this->Especial=Especial;
}
Goomba::Goomba(){

}void Goomba::setTamano(int tamano){
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