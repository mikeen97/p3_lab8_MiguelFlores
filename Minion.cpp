#include "Minion.h"

Minion::Minion(string Id,string Nombre,int Ganadas,int Experiencia){
	this->Id=Id;
	this->Nombre=Nombre;
	this->Ganadas=Ganadas;
	this->Experiencia=Experiencia;
}
Minion::Minion(){

}void Minion::setId(string Id){
   this-> Id=Id;
}
string Minion::getId(){
   return Id;
}
void Minion::setNombre(string Nombre){
   this-> Nombre=Nombre;
}
string Minion::getNombre(){
   return Nombre;
}
void Minion::setGanadas(int Ganadas){
   this-> Ganadas=Ganadas;
}
int Minion::getGanadas(){
   return Ganadas;
}
void Minion::setExperiencia(int Experiencia){
   this-> Experiencia=Experiencia;
}
int Minion::getExperiencia(){
   return Experiencia;
}
