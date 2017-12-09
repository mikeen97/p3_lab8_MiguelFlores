#include "Boo.h"
#include "Melee.h"
#include "ChainChop.h"
#include "Paratroopa.h"
#include "HammerBro.h"
#include "Magikoopa.h"
#include "Goomba.h"


Boo::Boo(string Id,string Nombre,int Ganadas,int Experiencia,int Vuelo,string Color,int HP,int Defensa,int Velocidad,int Fuerza,bool Especial):Flying(Id, Nombre, Ganadas, Experiencia, Vuelo){
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
void Boo::ataque(Minion* vrs){
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










/* 
void Boo::write(ofstream& out){
   int size=0;
                        //ID
   size=Id.length();
   out.write(Id.data(),size);
                        //NOMBRE
   int size=Nombre.length();
   out.write(Id.data(),size);
                        //GANADAS 
   out.write(reinterpret_cast<char*>(&Ganadas),sizeof(Ganadas));
                       //EXPERIENCIA
   out.write(reinterpret_cast<char*>(&Experiencia),sizeof(Experiencia));
                       //VUELO
   out.write(reinterpret_cast<char*>(&),sizeof(HP));
                        //COLOR
   int size=Color.length();
   out.write(Color.data(),size);
                        //HP
   out.write(reinterpret_cast<char*>(&HP),sizeof(HP));
                       //DEFENSA
   out.write(reinterpret_cast<char*>(&Defensa),sizeof(Defensa));
                        //VELOCIDAD
   out.write(reinterpret_cast<char*>(&Velocidad),sizeof(Velocidad));
                        //FUERZA
   out.write(reinterpret_cast<char*>(&Fuerza),sizeof(Fuerza));
                        //ESPECIAL
   out.write(reinterpret_cast<char*>(&HP),sizeof(HP));

}


void Boo::read(ifstream& in){
   int size=0;
                        //ID
   in.read(reinterpret_cast<char*>(&size),sizeof(size));
   char cadena[size];
   in.read(cadena,size);      
                        //NOMBRE
   size=0;
   in.read(reinterpret_cast<char*>(&size),sizeof(size));
   char cadena[size];
   in.read(cadena,size);   
                        //GANADAS 
   in.read(reinterpret_cast<char*>(&Ganadas),sizeof(Ganadas));
                       //EXPERIENCIA
   in.read(reinterpret_cast<char*>(&Experiencia),sizeof(Experiencia));
                       //VUELO
   in.read(reinterpret_cast<char*>(&Vuelo),sizeof(Vuelo));
                        //COLOR
   size=0;
   in.read(reinterpret_cast<char*>(&size),sizeof(size));
   char cadena[size];
   in.read(cadena,size);
                        //HP
   in.read(reinterpret_cast<char*>(&HP),sizeof(HP));
                       //DEFENSA
   in.read(reinterpret_cast<char*>(&Defensa),sizeof(Defensa));
                        //VELOCIDAD
   in.read(reinterpret_cast<char*>(&Velocidad),sizeof(Velocidad));
                        //FUERZA
   in.read(reinterpret_cast<char*>(&Fuerza),sizeof(Fuerza));
                        //ESPECIAL
   in.read(reinterpret_cast<char*>(&Especial),sizeof(Especial));
   
}
*/