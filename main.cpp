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
#include <fstream>

using namespace std;

//funciones
void QuePaso(string);
Minion* Equipo(vector<Minion*>);
void simulacion(Minion**,Minion**);

int main(){
	vector<Minion**> ListEquipos;
	vector<Minion*> ListMinions;
     cout<<"Bienvenido al Sistema "<<endl;
     int menu1=0;
     while(menu1!=7){
     	cout<<"Bienvenido al sistema\n";
     	cout<<"1) Agregar un Minion\n";
	 	cout<<"2) Eliminar un Minion\n";
	 	cout<<"3) Modificar un Minion\n";
	 	cout<<"4) Crear un Equipo\n";
		cout<<"5) Eliminar un Equipo\n";
	 	cout<<"6) simulacion\n";
	 	cout<<"7) SALIR\n";
	 	cin>>menu1;
		if (menu1==1){
			int tipo1=1;
			while(tipo1>0&&tipo1<4){
				cout<<"Ingrese que tipo de Minion desea agregar\n";
		    	cout<<"1) Tipo Melee\n";
				cout<<"2) Tipo Flying\n";
				cout<<"3) Tipo Range\n";
				cout<<"4) SALIR\n";
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
						id="0";
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
						ListMinions.push_back(x);
						cout<<ListMinions.size()<<endl;
						cout<<"Creado\n";
					}
					if (tipmale==2){//AGREGAR CHAIN CHO
						string id="",nombre="",color="";
						int intimidacion=0,hp=0;
						id="0";
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
						ChainChop* x = new ChainChop(id, nombre, 0, 0, intimidacion, color, hp, 20, 10,false);
						ListMinions.push_back(x);	
						cout<<ListMinions.size()<<endl;										 
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
						id="0";
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
						Boo* x = new Boo(id, nombre, 0, 0, vuelo, color,
							 hp, 20, 35, 8, false);
						ListMinions.push_back(x);
						cout<<ListMinions.size()<<endl;						

					}
					if (tipfly==2){//AGREGAR PARATROOPA
						string id="",nombre="",color="";
						int intimidacion=0,hp=0,vuelo=0;
						id="0";
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
						Paratroopa* x = new Paratroopa(id, nombre, 0, 0,vuelo,
							 color, hp, 40, 10, 9,false);
						ListMinions.push_back(x);
						cout<<ListMinions.size()<<endl;						
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
						id="0";
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
						HammerBro* x = new HammerBro(id, nombre, 0, 0,
					 	rango, tamano, hp, 15, 30, 6, false);
						ListMinions.push_back(x);
						cout<<ListMinions.size()<<endl;						
					}
					if (tiprange==2){//AGREGAR MAGIKOOPA
						string id="",nombre="",color="";
						int intimidacion=0,hp=0,rango=0;
						id="0";
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
						Magikoopa* x = new Magikoopa(id,nombre,0,0,
							rango,color,hp,0,60,7,false);
						ListMinions.push_back(x);
						cout<<ListMinions.size()<<endl;						
					}					
				}
			}
		}
		if (menu1==2){//eliminar minion
	        cout<<endl;
	        for (int i = 0; i < ListMinions.size(); i++) {
	          cout<<i<<"- ";
	          cout<<dynamic_cast<Minion*>(ListMinions[i])->getNombre()<<endl;
	        }
	        cout<<endl;
	        cout<<"Ingrese posicion de la persona que desea eliminar"<<endl;
	        int pos=0;
	        cin>>pos;
	        while(pos>ListMinions.size()||pos<0){
	          cout<<"Persona inexistente, ingrese de nuevo"<<endl;
	          cin>>pos;
	        }
	        ListMinions.erase(ListMinions.begin()+pos);
	        cout<<"Usuarios disponibles\n";
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
			int size=ListMinions.size();
			if (size<7){
				cout<<"No hay suficientes Minions\n";
			}else{
        		Minion* Participantes[7];
        		for (int i = 0; i < 7; i++) {
        		  Participantes[i] = Equipo(ListMinions);
        		}
        		ListEquipos.push_back(Participantes);
			}
		}
		if (menu1==5){//ELiminar equipo
			int size=ListMinions.size();
			if (size==0){
				cout<<"No hay equipos de Minions\n";
			}else{
				cout<<"-----EQUIPOS------\n";
        		cout<<"INGRESE A QUE EQUIPO DESEA ELIMINAR\n";
        		for (int i = 0; i < ListEquipos.size(); i++) {
        		cout<<i;
        		cout<<"Capitan--->"<<ListEquipos[i][0]->getNombre()<<endl;
        		}
        		int posEliminar;
        		cin>>posEliminar;

			}
		}		
		if (menu1==6){//Simulacion
			int size=ListMinions.size();
			if (size==0){
				cout<<"No hay equipos de Minions\n";
			}else{
				cout<<"-----EQUIPOS------\n";
        		cout<<"INGRESE A QUE EQUIPO con la simulacion\n";
        		for (int i = 0; i < ListEquipos.size(); i++) {
        		cout<<i;
        		Minion** x =  ListEquipos[i];
        		cout<<"Capitan--->"<<x[0]->getNombre()<<endl;
        		}
        		cout<<"Ingrese la posicion del equipo 1\n";
        		int pos1;
        		cin>>pos1;
        		cout<<"Ingrese la posicion del equipo 1\n";        		
        		int pos2;
        		cin>>pos2;
        		simulacion(ListEquipos[pos1],ListEquipos[pos2]);				
			}
		}		

	}
	return 0;
}
void simulacion(Minion** player1,Minion** player2){
	bool dead=false;
	int winTeam1=0,winTeam2=0, vueltas=0;
	cout<<"Entro a la guerra\n";
	while(vueltas<7){
		while(!dead){
			player1[vueltas]->ataque(player2[vueltas]);
			player2[vueltas]->ataque(player1[vueltas]);
			if (player2[vueltas]->getId()=="0"){
				dead=true;
				winTeam2++;
			}
			if (player1[vueltas]->getId()=="0"){
				dead=true;
				winTeam1++;
			}			
		}
		vueltas++;
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

void QuePaso(string bitacora){
  ofstream archivoTxt("LOG.txt", fstream::app | std::ios::out);
  if (archivoTxt.is_open()) {
    archivoTxt << "\n"<<bitacora;
    archivoTxt.close();
  }
}