#include <iostream>
#include <string>
#include "Minion.h"
#include "Melee.h"
#include "Flying.h"
#include "Range.h"
#include "Goomba.h"
#include "ChainChop.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "HammerBro.h"
#include "Magikoopa.h"

using namespace std;

//funciones
Minion* Equipo(vector<Minion*>);
void simulacion(Minion**,Minion**);

int main(){
	vector<Minion**> ListEquipos;
	vector<Minion*> ListMinions;
     cout<<"Bienvenido al Sistema "<<endl;
     int menu1=0;
     while(menu1!=4){
	    cout<<"Bienvenido al sistema\n";
	    cout<<"1) Agregar un Minion\n";
		cout<<"2) Eliminar un Minion\n";
		cout<<"3) Modificar un Minion\n";
		cout<<"4) Crear un Equipo\n";
		cout<<"5) GUARDAR\n";
		cout<<"6) SALIR\n";
		cin>>menu1;
		if (menu1==1){
			int tipo1=0;
			while(tipo1>0&&tipo1<4){
				cout<<"Ingrese que tipo de Minion desea agregar\n";
		    	cout<<"1) Tipo Melee\n";
				cout<<"2) Tipo Flying\n";
				cout<<"3) Tipo Range\n";
				cin>>tipo1;
				if (tipo1==1){//MENU DE MELEE
					int tipmale=0;
					cout<<"Que tipo de Melee desea?\n";
				    cout<<"1) Goomba\n";
					cout<<"2) Chain Chop\n";
					cin>>tipmale;
					if (tipmale==1){//AGREGAR GOOMBA
						string id="",nombre="";
						int intimidacion=0,tamano=0,hp=0;
						id="1";
						cout<<"Ingrese el nombre\n";
						cin>>nombre; 
						cout<<"Ingrese nivel de intimidacion\n";
						cin>>intimidacion; 
						cout<<"Ingrese tamano\n";
						cin>>tamano;
						do{
						 	cout<<"Ingrese el hp del Goomba\n";
						 	cin>>hp;
						 } while (hp<20||hp>40);
						Goomba* x = new Goomba(id, nombre, 0, 0, intimidacion, tamano, hp, 0, 65, 10, false);
						cout<<"Creado\n";
					}
					if (tipmale==2){//AGREGAR CHAIN CHO
						string id="",nombre="",color="";
						int intimidacion=0,hp=0;
						id="2";
						cout<<"Ingrese el nombre\n";
						cin>>nombre; 
						cout<<"Ingrese nivel de intimidacion\n";
						cin>>intimidacion; 
						cout<<"Ingrese color\n";
						cin>>color;
						do{
						 	cout<<"Ingrese el hp del Goomba\n";
						 	cin>>hp;
						 } while (hp<10&&hp>30);
						ChainChop(id,nombre,0,0,intimidacion,color,hp,20,10,false);						 
					}
				}
				if (tipo1==2){//MENU DE FLYING
					int tipfly=0;
					cout<<"Que tipo de Flying desea?\n";
				    cout<<"1) Boo\n";
					cout<<"2) Paratroopa\n";
					cin>>tipfly;
					int podervuelo=0;
					cout<<"Ingrese habilidad de vuelo\n";
					cin>>podervuelo;
					if (tipfly==1){//AGREGAR BOO
						string id="",nombre="",color=""	;
						int hp=0,vuelo=0;
						id="3";
						cout<<"Ingrese el nombre\n";
						cin>>nombre; 
						cout<<"Ingrese nivel de vuelo\n";
						cin>>vuelo; 
						cout<<"Ingrese color\n";
						cin>>color;
						do{
						 	cout<<"Ingrese el hp del Goomba\n";
						 	cin>>hp;
						 } while (hp<10&&hp>30);
						Boo(id, nombre, 0, 0, vuelo, color,
							 hp, 20, 35, 8, false);

					}
					if (tipfly==2){//AGREGAR PARATROOPA
						string id="",nombre="",color="";
						int intimidacion=0,hp=0,vuelo=0;
						id="4";
						cout<<"Ingrese el nombre\n";
						cin>>nombre; 
						cout<<"Ingrese capacidad de vuelo\n";
						cin>>vuelo; 
						cout<<"Ingrese color\n";
						cin>>color;
						do{
						 	cout<<"Ingrese el hp del Goomba\n";
						 	cin>>hp;
						 } while (hp<10&&hp>30);
						Paratroopa(id, nombre, 0, 0,vuelo,
							 color, hp, 40, 10, 9,false);
					}
				}
				if (tipo1==3){//MENU DE RANGE
					int tiprange=0;
					cout<<"Que tipo de Range desea?\n";
				    cout<<"1) Hammer Bro\n";
					cout<<"2) Magikoopa\n";
					cin>>tiprange;
					if (tiprange==1){//AGREGAR HAMMER BRO
						string id="",nombre="",tamano="";
						int intimidacion=0,hp=0,rango=0;
						id="5";
						cout<<"Ingrese el nombre\n";
						cin>>nombre; 
						cout<<"Ingrese su rango\n";
						cin>>rango; 
						cout<<"Ingrese tamano \n";
						cin>>tamano;
						do{
						 	cout<<"Ingrese el hp del Goomba\n";
						 	cin>>hp;
						} while (hp<60&&hp>80);
				HammerBro(id, nombre, 0, 0,
					 rango, tamano, hp, 15, 30, 6, false);
					}
					if (tiprange==2){//AGREGAR MAGIKOOPA
						string id="",nombre="",color="";
						int intimidacion=0,hp=0,rango=0;
						id="6";
						cout<<"Ingrese el nombre\n";
						cin>>nombre; 
						cout<<"Ingrese su rango\n";
						cin>>rango; 
						cout<<"Ingrese color del traje \n";
						cin>>color;
						do{
						 	cout<<"Ingrese el hp del Goomba\n";
						 	cin>>hp;
						} while (hp<60&&hp>80);
						Magikoopa(id,nombre,0,0,
							rango,color,hp,0,60,7,false);
					}					
				}
			}
		}
		if (menu1==2){//eliminar minion
	        cout<<endl;
	        for (int i = 0; i < ListMinions.size(); i++) {
	          cout<<i<<"- ";
	          dynamic_cast<Minion*>(ListMinions[i])->getNombre();
	        }
	        cout<<endl;
	        cout<<"Ingrese posicion de la persona que desea eliminar"<<endl;
	        int pos=0;
	        cin>>pos;
	        while(pos>ListMinions.size()||pos<0){
	          cout<<"Persona inexistente, ingrese de nuevo"<<endl;
	          cin>>pos;
	        }
	        delete ListMinions.at(pos);
	        ListMinions.erase(ListMinions.begin()+pos);
		}
		if (menu1==3){//Modificar minion
	        cout<<endl;

	        for (int i = 0; i < ListMinions.size(); i++) {
	          cout<<i<<"- ";
	          dynamic_cast<Minion*>(ListMinions[i])->getNombre();
	        }
	        cout<<endl;
	        cout<<"Ingrese posicion de la persona que desea modificar"<<endl;
	        int pos=0;
	        cin>>pos;
	        while(pos>ListMinions.size()||pos<0){
	          cout<<"Persona inexistente, ingrese de nuevo"<<endl;
	          cin>>pos;
	        }
	        if (dynamic_cast<Goomba*>(ListMinions[pos])){//MODIFICAR GOOMBA
	        	//NOMBRE
	        	string name="";
	        	cout<<"Ingrese nuevo nombre\n";
	        	cin>>name;
	        	dynamic_cast<Minion*>(ListMinions[pos])->setNombre(name);
	        	//intimidacion
	        	cout<<"Ingrese nuevo nivel de intimidacion\n";
	        	int newintimidacion=0;
	        	cin>>newintimidacion;
	        	dynamic_cast<Melee*>(ListMinions[pos])->setIntimidacion(newintimidacion);
	        	//tamano
	        	cout<<"Ingrese su nuevo tamano\n";
	        	int tamano1=0;
	        	cin>>tamano1;
				dynamic_cast<Goomba*>(ListMinions[pos])->setTamano(tamano1);
				//hp
	        	cout<<"Ingrese su nuevo hp\n";
	        	int hp1=0;
	        	cin>>hp1;
				dynamic_cast<Goomba*>(ListMinions[pos])->setHP(hp1);				

	        }
	        if (dynamic_cast<ChainChop*>(ListMinions[pos])){//MODIFICAR CHAINCHOP
	        	//NOMBRE
	        	string name="";
	        	cout<<"Ingrese nuevo nombre\n";
	        	cin>>name;
	        	dynamic_cast<Minion*>(ListMinions[pos])->setNombre(name);
	        	//intimidacion
	        	int newintimidacion=0;
	        	cout<<"Ingrese nuevo nivel de intimidacion\n";
	        	cin>>newintimidacion;
	        	dynamic_cast<Melee*>(ListMinions[pos])->setIntimidacion(newintimidacion);
	        	//color
	        	cout<<"Ingrese su nuevo color\n";
	        	string color1=0;
	        	cin>>color1;
				dynamic_cast<ChainChop*>(ListMinions[pos])->setColor(color1);
				//hp
	        	cout<<"Ingrese su nuevo hp\n";
	        	int hp1=0;
	        	cin>>hp1;
				dynamic_cast<ChainChop*>(ListMinions[pos])->setHP(hp1);	        	
	        }
	        if (dynamic_cast<Boo*>(ListMinions[pos])){//MODIFICAR BOO///flying
	        	//NOMBRE
	        	string name="";
	        	cout<<"Ingrese nuevo nombre\n";
	        	cin>>name;
	        	dynamic_cast<Minion*>(ListMinions[pos])->setNombre(name);
	        	//VUELO
	        	int newvuelo=0;
	        	cout<<"Ingrese nuevo nivel de vuelo\n";
	        	cin>>newvuelo;
	        	dynamic_cast<Flying*>(ListMinions[pos])->setVuelo(newvuelo);
	        	//color
	        	cout<<"Ingrese su nuevo color\n";
	        	string color1=0;
	        	cin>>color1;
				dynamic_cast<Boo*>(ListMinions[pos])->setColor(color1);
				//hp
	        	cout<<"Ingrese su nuevo hp\n";
	        	int hp1=0;
	        	cin>>hp1;

	        	string holaa = "sdadas";
	        	holaa.size();

				dynamic_cast<Boo*>(ListMinions[pos])->setHP(hp1);	        	
	        }			
	        if (dynamic_cast<Paratroopa*>(ListMinions[pos])){//MODIFICAR PARATROOPA
	        	//NOMBRE
	        	string name="";
	        	cout<<"Ingrese nuevo nombre\n";
	        	cin>>name;
	        	dynamic_cast<Minion*>(ListMinions[pos])->setNombre(name);
	        	//VUELO
	        	int newvuelo=0;
	        	cout<<"Ingrese nuevo nivel de vuelo\n";
	        	cin>>newvuelo;
	        	dynamic_cast<Flying*>(ListMinions[pos])->setVuelo(newvuelo);
	        	//color
	        	cout<<"Ingrese su nuevo color\n";
	        	string color1=0;
	        	cin>>color1;
				dynamic_cast<Paratroopa*>(ListMinions[pos])->setColor(color1);
				//hp
	        	cout<<"Ingrese su nuevo hp\n";
	        	int hp1=0;
	        	cin>>hp1;
				dynamic_cast<Boo*>(ListMinions[pos])->setHP(hp1);	    	        	
	        }
	        if (dynamic_cast<HammerBro*>(ListMinions[pos])){//MODIFICAR HAMMERBRO
	        	//NOMBRE
	        	string name="";
	        	cout<<"Ingrese nuevo nombre\n";
	        	cin>>name;
	        	dynamic_cast<Minion*>(ListMinions[pos])->setNombre(name);
	        	//RANGO
	        	int newrango=0;
	        	cout<<"Ingrese nuevo rango\n";
	        	cin>>newrango;
	        	dynamic_cast<Range*>(ListMinions[pos])->setRango(newrango);
	        	//tamano
	        	cout<<"Ingrese su nuevo tamano\n";
	        	string tamano1=0;
	        	cin>>tamano1;
				dynamic_cast<HammerBro*>(ListMinions[pos])->setTamano(tamano1);
				//hp
	        	cout<<"Ingrese su nuevo hp\n";
	        	int hp1=0;
	        	cin>>hp1;
				dynamic_cast<HammerBro*>(ListMinions[pos])->setHP(hp1);	    
	        }
	        if (dynamic_cast<Magikoopa*>(ListMinions[pos])){//MODIFICAR MAGIKOOPA
	        	//NOMBRE
	        	string name="";
	        	cout<<"Ingrese nuevo nombre\n";
	        	cin>>name;
	        	dynamic_cast<Minion*>(ListMinions[pos])->setNombre(name);
	        	//RANGO
	        	int newrango=0;
	        	cout<<"Ingrese nuevo rango\n";
	        	cin>>newrango;
	        	dynamic_cast<Range*>(ListMinions[pos])->setRango(newrango);
	        	//color
	        	cout<<"Ingrese su nuevo color\n";
	        	string color1=0;
	        	cin>>color1;
				dynamic_cast<Magikoopa*>(ListMinions[pos])->setColor(color1);
				//hp
	        	cout<<"Ingrese su nuevo hp\n";
	        	int hp1=0;
	        	cin>>hp1;
				dynamic_cast<Magikoopa*>(ListMinions[pos])->setHP(hp1);		   			
	        }

		}
		if (menu1==4){//Crear equipo
        	Minion* Participantes[7];
        	for (int i = 0; i < 7; i++) {
        	  Participantes[i] = Equipo(ListMinions);
        	}
        	ListEquipos.push_back(Participantes);
		}
	}
	return 0;
}
void simulacion(Minion**,Minion**){
	for (int i = 0; i < 7; ++i){
		
	}
}

Minion* Equipo(vector<Minion*> vectorM){
	cout<<"---------LISTA DE MINIONS-----\n";
	for (int i = 0; i < vectorM.size(); i++) {
		cout<<i<<" "<<vectorM[i]->getNombre()<<"\n";
	}
	cout<<"QUE JUGADOR DESEA AGREGAR\n";
	int posicion=0;
	cin>>posicion;
	return vectorM[posicion];
}