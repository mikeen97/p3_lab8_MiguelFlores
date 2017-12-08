#include "Boo.h"

Boo::Boo(string Color,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial){
	this->Color=Color;
	this->HP=HP;
	this->Defensa=Defensa;
	this->Velocidad=Velocidad;
	this->Fuerza=Fuerza;
	this->Especial=Especial;
}
Boo::Boo(){

}void Boo::setColor(string Color){
   this-> Color=Color;
}
string Boo::getColor(){
   return Color;
}
void Boo::setHP(int HP){
   this-> HP=HP;
}
int Boo::getHP(){
   return HP;
}
void Boo::setDefensa(int Defensa){
   this-> Defensa=Defensa;
}
int Boo::getDefensa(){
   return Defensa;
}
void Boo::setVelocidad(int Velocidad){
   this-> Velocidad=Velocidad;
}
int Boo::getVelocidad(){
   return Velocidad;
}
void Boo::setFuerza(int Fuerza){
   this-> Fuerza=Fuerza;
}
int Boo::getFuerza(){
   return Fuerza;
}
void Boo::setEspecial(bool Especial){
   this-> Especial=Especial;
}
bool Boo::getEspecial(){
   return Especial;
}
