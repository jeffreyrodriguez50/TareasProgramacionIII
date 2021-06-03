#include <iostream>
#include "hospedaje.h"
#include "hotel.h"
#include "apartamento.h"
#include "airbnb.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int opcion;
	cout<<"elija una opcion: "<<endl;
	cout<<"1 - Hotel \n 2 - Apartamento \n 3 - AirBnB"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:
			int noches,pagar;
			cout<<"Cuantas noches va a hospedarse?"<<endl;
			cin>>noches;
			hotel victoria;
			victoria.setPrecio(1000);
			victoria.setPrecioComida(500);
			pagar = (victoria.getprecio() * noches) + victoria.getPrecioComida();
			cout<<"Total a pagar con gastos de comida incluida: "<<pagar<<endl;
			break;
		case 2:
			int contrato,pagarAp,tiempo;
			cout<<"Cuanto tiempo desea el contrato?"<<endl;
			cout<<"1 - Un mes \n 2 - Medio Año \n 3 - Un Año"<<endl;
			cin>>contrato;
			switch(contrato){
				case 1:
					apartamento apto;
					apto.setPrecio(5000);
					apto.setTiempo(1);
					pagarAp=apto.getprecio() * apto.getTiempo();
					cout<<"Total a pagar por un mes: "<<pagarAp<<endl;
					break;
				case 2:
					
					apto.setPrecio(5000);
					apto.setTiempo(6);
					pagarAp=apto.getprecio() * apto.getTiempo();
					cout<<"Total a pagar por un mes: "<<pagarAp<<endl;
					break;
				case 3:
					apto.setPrecio(5000);
					apto.setTiempo(12);
					pagarAp=apto.getprecio() * apto.getTiempo();
					cout<<"Total a pagar por un mes: "<<pagarAp<<endl;
					break;
			}
			
			break;
		case 3:
			int nochesbnb,pagarbnb,personas,total;
			cout<<"Cuantas noches va a hospedarse?"<<endl;
			cin>>nochesbnb;
			cout<<"Cuantas personas van a hospedarse?"<<endl;
			cin>>personas;
			airbnb abnb;
			abnb.setPrecio(1000);
			abnb.setGente(personas);
			
			pagarbnb = (abnb.getprecio() * nochesbnb);
			total = pagarbnb * abnb.getGente();
			
			cout<<"Total a pagar: "<<total<<endl;
			break;
	}
	
	
	return 0;
}
