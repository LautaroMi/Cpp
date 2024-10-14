#include <iostream>
#include <stdio.h>
using namespace std;

struct Participantes{
    string Documento = "DNI";
    int DNI;
    string appellido;
    string nombre;
    string mail;
    struct Direccion{
        string calle;
        int altura;
        int piso;
        char depto;
    };
    Direccion una_direccion;    
};


void mostrarListado{

}



int main(){
    const int DF = 3000;
    int dl = 0;
    Participantes participantes[DF];
    cout <<"Se solicitara el ingreso de datos de los participantes."<<endl;
    cout <<"DNI('0' para finalizar): ";
    cin >> participantes[dl].DNI;
    while (dl < DF && parcipantes[dl] != 0){
        
    }
    
    


}