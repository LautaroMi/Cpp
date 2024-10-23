#include <iostream>
#include <stdio.h>
using namespace std;

struct Participantes{
    string Documento = "DNI";
    int DNI;
    string apellido;
    string nombre;
    string mail;
    struct Direccion{
        string calle;
        int altura;
        int piso;
        char depto;
        string localidad;
    };
    Direccion una_direccion;    
};


void mostrarListado(Participantes arr[],int dl){
    for(int i= 0; i < dl ; i++){
        cout << "Tipo de documento: "<<arr[i].Documento<<endl;
        cout << "DNI: " << arr[i].DNI<<endl;
        cout << "Apellido: " << arr[i].apellido<<endl;
        cout << "Nombre: " << arr[i].nombre<<endl;
        cout << "Mail: " << arr[i].mail<<endl;
        cout << "Calle: " << arr[i].una_direccion.calle<<endl;
        cout << "Altura: " << arr[i].una_direccion.altura<<endl;
        cout << "Piso: " << arr[i].una_direccion.piso<<endl;
        cout << "Departamento: " << arr[i].una_direccion.depto<<endl;
        cout << "Localidad: " << arr[i].una_direccion.localidad<<endl;
    }
}

int buscarParticipante(Participantes arr[],int dl, int buscado){
    for (int i = 0; i < dl; i++){
        if (arr[i].DNI == buscado){
            return i;
        }
    }
    return -1;
}


int main(){
    const int DF = 3000;
    int dl = 0;
    Participantes participantes[DF];
    cout <<"Se solicitara el ingreso de datos de los participantes."<<endl;
    cout << "Participante " << dl+1 << ". "<<endl;
    cout <<"DNI('0' para finalizar): ";
    cin >> participantes[dl].DNI;
    while (dl < DF && participantes[dl].DNI != 0){
        cout << "Apellido: ";
        cin >> participantes[dl].apellido;
        cout << "Nombre: ";
        cin >> participantes[dl].nombre;
        cout << "Mail: ";
        cin >> participantes[dl].mail;
        cout << "Calle: ";
        cin >> participantes[dl].una_direccion.calle;
        cout << "Altura: ";
        cin >> participantes[dl].una_direccion.altura;
        cout << "Piso: ";
        cin >> participantes[dl].una_direccion.piso;
        cout << "Departamento: ";
        cin >> participantes[dl].una_direccion.depto;
        cout << "Localidad: ";
        cin >> participantes[dl].una_direccion.localidad;
        dl++;
        cout << "Participante " << dl+1 << ". "<<endl;
        cout <<"DNI('0' para finalizar): ";
        cin >> participantes[dl].DNI;
    }


    int opcion;
    do
    {   
    cout << "Se le permitira buscar un participante: "<<endl;
    cout << "0. Salir."<<endl;
    cout << "1. Buscar participante."<<endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    switch (opcion){
    case 0:
        cout << "Se saldra del menu."<<endl;
        break;
    case 1:
        int buscado;
        int control;
        cout << "Ingrese el DNI del participante a buscar: ";
        cin >> buscado;
        control = buscarParticipante(participantes,dl,buscado);
        if(control != -1){
            cout << "El participante esta en la lista."<<endl;
        }
        else{
            cout << "El participante no esta en la lista."<<endl;
        }
        
        break;
        
    default:
        cout << "Ingrese una opcion valida.";
        break;
    }     
    } while (opcion !=0);
    
    cout << "Se mostrara un listado con los datos de todos los participantes. "<<endl;

    mostrarListado(participantes, dl);
   
    
    


}