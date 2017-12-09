#include "Boo.h"


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