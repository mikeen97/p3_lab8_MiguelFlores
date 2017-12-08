#include "HammerBro.h"

HammerBro::HammerBro(string tamano,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial){
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
