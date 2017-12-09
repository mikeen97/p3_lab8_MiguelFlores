#include "Magikoopa.h"

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
void Magikoopa::ataque(Minion*){
   /*
   int atacar=0;
   if (!dynamic_cast<Flying*>(vrs)){
      atacar= Fuerza- vrs->getDefensa();
      int vida= vrs->getHP();
      vrs->setHP(vida-atacar);
   }else{
      atacar= (Fuerza*0.50)- vrs->getDefensa();
      int vida= vrs->getHP();
      vrs->setHP(vida-atacar);
   }
   */
}

