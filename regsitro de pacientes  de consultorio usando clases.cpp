//Programa hecho por: Jesús Steven Medrano Carballo
//carnet:MC18055
//pragramacion 2

#include <iostream>//se utiliza para las entradas y salidas de las operaciones
#include <string>//se utiliza para la dedefinición de macros, constantes, funciones, etc
#include <conio.h>//esta libreria sirve para controlar las entradas y salidas del programa
#include <windows.h>//nos permite acceder a las funciones de windows

using namespace std; //para espacios de nombres

class Paciente{
	private: //la informacion es privada
	class Nodo{
	public: //la informacion es publica
    int num_correlativo;
    char nombre[50];
    char apellido[50];
	int edad;
	char sexo[3]; 
	int peso;
	char enfermedad_cronica[50];
	Nodo *sig;	
	};
    
 Nodo *raiz;
 
    public: //la informacion es publica
    Paciente();
    ~Paciente();
    void Agregar();
    void Mostrar();
    void Buscar();
    	  	
};

Paciente::Paciente()
{
    raiz = NULL;
}
Paciente::~Paciente()
{

}

void Paciente::Mostrar(){
    Nodo *reco = raiz;
    cout <<"\t\t\t\t\t -----HISTORIAL CLINICO-----\n";
    while (reco != NULL){
	cout<<"\t\t\t\t\t Numero correlativo: "<<reco->num_correlativo<<endl;
    cout<<"\t\t\t\t\t Nombre: "<<reco->nombre<<endl;
    cout<<"\t\t\t\t\t Apellido: "<<reco->apellido<<endl;
    cout<<"\t\t\t\t\t Edad: "<<reco->edad<<endl;
    cout<<"\t\t\t\t\t Sexo: "<<reco->sexo<<endl;
    cout<<"\t\t\t\t\t Peso: "<<reco->peso<<endl;
    cout<<"\t\t\t\t\t Enfermedad cronica: "<<reco->enfermedad_cronica<<endl;
    reco = reco->sig;
    }
    cout<<"\n";
}

void Paciente::Agregar()
{
	
	 Nodo *nuevo;
    nuevo = new Nodo();
    cout<<"\t\t\t\t\t ingrese numero correlativo: ";
    cin>>nuevo->num_correlativo;
    cout<<"\t\t\t\t\t ingrese nombre: ";
    cin>>nuevo->nombre;
    cout<<"\t\t\t\t\t ingrese apellido: ";
    cin>>nuevo->apellido;
    cout<<"\t\t\t\t\t ingrese edad: ";
    cin>>nuevo->edad;
    cout<<"\t\t\t\t\t ingrese sexo: ";
    cin>>nuevo->sexo;
    cout<<"\t\t\t\t\t ingrese peso (kg): ";
    cin>>nuevo->peso;
    cout<<"\t\t\t\t\t ingrese enfermedad cronica: ";
    cin>>nuevo->enfermedad_cronica;
    
    if (raiz == NULL){
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else{
        nuevo->sig = raiz;
        raiz = nuevo;
    }

}

void Paciente::Buscar(){
	
	
	if (raiz != NULL){
	
		int buscardatos;
	    cout<<"\t\t\t\t\t Ingrese numero correlativo"<<endl;
	    cin>>buscardatos;
	    
	    if(buscardatos == raiz->num_correlativo){ 
	    	
            cout<<"\t\t\t\t\t Encontrado, el numero correlativo esta en el historial y es: "<<raiz->num_correlativo<<endl;
		}
		else{
		
			cout<<"\t\t\t\t\t no se encontro el numero correlativo"<<endl;
		}
	}
	else{
	
		cout<<"\t\t\t\t\t el consultorio esta vacio...."<<endl;
	}
}

int main() {
	system ("color 3F"); //lo usamos para darle color al fondo y la fuente
	Paciente *consulta;
    consulta= new Paciente();
    int opc;//esta variable es para el menu
    
    do{
    	Beep (500,100); //nos sirve para dar pitidos en con una frecuencia determinada
    	//aqui se muestra las opciones del menu
    	
	    cout<<"\t\t\t\t\t *********CONSULTORIO**********"<<endl;
	    cout<<"\t\t\t\t\t ______Ingrese una opcion______"<<endl;
       	cout<<" "<<endl;
	
        cout<<"\t\t\t\t\t 1 - Agregar nuevo paciente"<<endl;
        cout<<"\t\t\t\t\t 2 - Mostrar datos del paciente"<<endl;
        cout<<"\t\t\t\t\t 3 - Buscar  paciente"<<endl;
        cout<<"\t\t\t\t\t 4 - Salir"<<endl;
        cout<<"\t\t\t\t\t ******************************"<<endl;
	    cin>>opc;// muestra en pantalla el menu
	    
	    switch(opc){
	    	
	    	case 1:
        	     consulta->Agregar(); 
	       	break;
	    	
	    	case 2:
         	     	consulta->Mostrar();
	    	break;
	    	
	    	case 3:
	    		 consulta->Buscar();
	    	break;
	    	
	    	case 4:
	    	break;
		}
		
	system ("pause"); //hace una pausa
		
	system("cls"); //lo usamos para limpiar la pantalla

    }while(opc!=4);
    
    cout<<"\t\t\t\t\t ----------------------------------------------"<<endl;
cout<<"\t\t\t\t\t =======<GRACIAS POR USAR ESTE PROGRAMA>======="<<endl;
cout<<"\t\t\t\t\t ----------------------------------------------"<<endl;

cout<<"\a";
cout<<"\t\t\t\t\t DESARROLLADO POR: JESUS STEVEN MEDRANO CARBALLO"<<endl;
cout<<"\t\t\t\t\t UNIVERSIDAD DE EL SALVADOR"<<endl;
cout<<"\t\t\t\t\t CICLO 03"<<endl;
cout<<"\t\t\t\t\t VERSION 2019"<<endl;

getch(); //sirve para darle una pausa al programa

return 0; //no retorna ningun valor
}
