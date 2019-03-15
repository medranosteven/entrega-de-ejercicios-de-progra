//Programa hecho por: Jesús Steven Medrano Carballo
//carnet:MC18055

#include <iostream>//se utiliza para las entradas y salidas de las operaciones
#include <string>//se utiliza para la dedefinición de macros, constantes, funciones, etc
#include <queue>//nos permite almacenar objetos y luego recuperarlos en el orden en el cual se insertaron
#include <conio.h>//esta libreria sirve para controlar las entradas y salidas del programa
#include <windows.h>//nos permite acceder a las funciones de windows

using namespace std; //para espacios de nombres

struct coordenadas{ //relizamos una estructura para las coordenadas
int x; //vector x
int y; //vector y
int z; //vector z
};
    
void c(){
	system("cls"); //lo usamos para limpiar la pantalla
	Beep (700,200); //nos sirve para dar pitidos en con una frecuencia determinada
}

void p(){
	system("pause"); //lo usamos para hacer una pausa
}

int main()
{
    system ("color 5E"); //lo usamos para darle color al fondo y la fuente
	queue<coordenadas>cola;//creamos la cola
	coordenadas *ptr;//creamos un puntero
	int opc;//esta variable es para el menu
	int co;//variable para contador
	do{
		
	//menu que se repite hasta que el usuario seleccione salir
	
	cout<<"\t\t\t\t\t**********programa de coordenadas**********"<<endl<<endl;
	cout<<"\t\t\t\t\t------seleccione la opcion a ejecutar------"<<endl<<endl;
	cout<<"\t\t\t\t\t 1. Ingresar coordenadas"<<endl;
	cout<<"\t\t\t\t\t 2. Mostrar coordenadas"<<endl;
	cout<<"\t\t\t\t\t 3. Mostrar promedios de coordenadas x,y,z"<<endl;
	cout<<"\t\t\t\t\t 4. Salir"<<endl;
	cout<<"\t\t\t\t\t*******************************************"<<endl;
	cout<<endl;
	cin>>opc;
	
	switch (opc){
				case 1: c();
						coordenadas aux;//creacion de un auxiliar para introducirlos a la cola
		            	cout<<"\t\t\t\t\t Ingrese la coordenada de x: ";
						cin>>aux.x;
		            	cout<<"\t\t\t\t\t Ingrese la coordenada de y: ";
						cin>>aux.y;
						cout<<"\t\t\t\t\t Ingrese la coordenada de z: ";
		            	cin>>aux.z;
				        cola.push(aux);//introducimos el proceso a la cola
				        c();
				        cout<<"\t\t\t\t\t PROCESO REALIZADO CON EXITO"<<endl;
				        p();
		        		c();
		        		break;
		        case 2: c();
		                ptr=&cola.front();
						for(int i=0; i<cola.size(); i++){//se repite el ciclo
						coordenadas auxi;//variable auxiliar para almacenar
        		 		auxi=*ptr;
		        		cout<<"\t\t\t\t\t coordenada x: "<<auxi.x <<endl;
		        		cout<<"\t\t\t\t\t coordenada y: "<<auxi.y <<endl;
		        		cout<<"\t\t\t\t\t coordenada z: "<<auxi.z <<endl;
		        		ptr++;//el puntero avanza una posicion
        				}
        				p();
		        		c();
						break;
				case 3: c();ptr=&cola.front();
        				int xx;//coordenadas x
        				float yy;//coordenadas y flotante para evitar error de decimales
        				int zz;//coordenadas z
        				zz=1; //inicializamos la coordenada z en 1 pora que salga correcto el prom
        				
						for(co=0; co<cola.size(); co++){//ciclo for mientras no se pulse salir
						coordenadas auxi;//variable auxiliar para almacenar
        		 		auxi=*ptr;
		        		xx=xx+auxi.x;
		        		yy=yy+auxi.y;
		        		zz=(zz)+auxi.z;
		        		ptr++;//con esto el puntero avanza una posicion
        				}
        				cout<<"\t\t\t\t\t el promedio de la coordenada x es: "<<(xx/co) <<endl;
        				cout<<"\t\t\t\t\t el promedio de la coordenada y es: "<<(yy/co) <<endl;
        				cout<<"\t\t\t\t\t el promedio de la coordenada z es: "<<(zz/co) <<endl;
        				p();
		        		c();
				case 4: break;
					}
	} while (opc != 4);
	
cout<<"\t\t\t\t\t ----------------------------------------------"<<endl;
cout<<"\t\t\t\t\t =======<GRACIAS POR USAR ESTE PROGRAMA>======="<<endl;
cout<<"\t\t\t\t\t ----------------------------------------------"<<endl;

cout<<"\a";
cout<<"\t\t\t\t\t DESARROLLADO POR: JESUS STEVEN MEDRANO CARBALLO"<<endl;
cout<<"\t\t\t\t\t UNIVERSIDAD DE EL SALVADOR"<<endl;
cout<<"\t\t\t\t\t CICLO 03"<<endl;
cout<<"\t\t\t\t\t VERSION 2019"<<endl;

system ("pause"); //hace una pausa

return EXIT_SUCCESS; //retorno con exito
}
