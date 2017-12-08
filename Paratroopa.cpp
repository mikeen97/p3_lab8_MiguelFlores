#include "Paratroopa.h"

Paratroopa::Paratroopa(string Color,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial){
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
