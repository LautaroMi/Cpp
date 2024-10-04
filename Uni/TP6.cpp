/*
Escribir una definición para una función llamada mas_uno que tiene un parámetro formal para un arreglo de 
enteros e incrementa en uno el valor de cada elemento del arreglo. Añadir otros parámetros formales que se 
necesiten.
*/

#include <iostream>
using namespace std;

void mostrar_arreglo(int arreglo[],int DL){
    for (int i = 0; i < DL; i++)
    {
        cout << arreglo[i] << " ";
    }

}

void mas_uno(int* arreglo,int tamano){
    for (int i = 0; i < tamano; i++){
        arreglo[i]++;
    }
    
    

}


int main(){

    const int DF = 50;
    int DL = 10;
    int arreglo[DF]= {0,1,2,3,4,5,6,7,8,9};

    cout << "El arreglo antes: " << endl;
    mostrar_arreglo(arreglo,DL);

    mas_uno(arreglo,DL);

    cout << "\nEl arreglo despues: "<<endl ;
    mostrar_arreglo(arreglo,DL);


    



}