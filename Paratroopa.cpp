#include "Paratroopa.h"

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
void Paratroopa::ataque(Minion*){
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
