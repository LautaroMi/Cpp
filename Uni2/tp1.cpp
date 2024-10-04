#include <iostream>
#include <stdio.h>
using namespace std;

int busquedaSecuencialDesordenada(string arreglo[],int dimension, string buscado){
    int i = 0;
    while(i < dimension && arreglo[i] != buscado){
        i++;
    }
    if( i < dimension){
        return i;
    }
    else{
        return -1;
    }

}



int main(){
    int const DF=50; 
    int Dl = 0;
    string color;
    string colores[DF];


    // Cargar arreglo
    cout << "Se le solicitaran colores para rellenar un arreglo. "<<endl;
    do
    {
        cout << "Ingrese un color.('x' para finalizar): ";
        getline(cin >> ws, color);
        if (color != "x"){
            colores[Dl] = color;
            Dl++;
            cout << "Quedan disponibles " << DF - Dl << " espacios."<<endl;
        }

    } while (color != "x" && Dl < DF);
    
    //Preguntar si quiere buscar un color;
    string control;
    cout << "Ingrese 'Si' si quiere buscar un elemento: ";
    cin >> control;
    

    if (control == "Si")
    {
        cout<< "Ingrese el color a buscar: ";
        getline(cin >> ws, color);
        int posicion = busquedaSecuencialDesordenada(colores,Dl,color);
        if(posicion != -1){
            cout<< "El color se encuentra en el arreglo!"<<endl;
        }
        else{
            cout << "El color no se encuentra en el arreglo!"<<endl;
        }
    }

}