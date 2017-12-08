#include "Magikoopa.h"

Magikoopa::Magikoopa(string Color,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial){
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
