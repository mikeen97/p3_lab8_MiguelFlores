#include "Flying.h"

Flying::Flying(int Vuelo){
	this->Vuelo=Vuelo;
}
Flying::Flying(){

}void Flying::setVuelo(int Vuelo){
   this-> Vuelo=Vuelo;
}
int Flying::getVuelo(){
   return Vuelo;
}
