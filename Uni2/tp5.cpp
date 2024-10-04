/*
Escribir un programa en C++ que realice las siguientes tareas: 
a) generar, aleatoriamente, una lista (arreglo) con 100 números enteros en el rango de 0 a 100.000;
b) Ordenar el listado en modo creciente por el método de la burbuja; 
c) Ordenar el listado en modo decreciente por el método de la burbuja
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrarArreglo(int arr[],int dF){
    for (int i = 0; i < dF; i++){
        cout << arr[i] << " ";
    }
}

void cargarArreglo(int arr[],int df){
    srand(time(0));
    for (int i = 0; i < df; i++){
        arr[i] = rand() % (100000 + 1);
    }
}

void ordenarCreciente(int arr[],int dl){
    for (int i = 0; i < dl-1; i++){
        for (int j = 0; j < dl-1-i; j++){
            if (arr[j] > arr[j+1]){            
            int aux = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = aux;
            }
        }   
    }
}

void ordenarDecreciente(int arr[],int dl){
    for (int i = 0; i < dl-1; i++){
        for (int j = 0; j < dl-1-i; j++){
            if (arr[j] < arr[j+1]){            
            int aux = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = aux;
            }
        }
    }   
}


int main(){
    int const dF = 100;
    int arreglo[dF];

    cargarArreglo(arreglo,dF);

    ordenarCreciente(arreglo, dF);
    cout << "Creciente.El arreglo generado es: "<<endl;
    mostrarArreglo(arreglo,dF);

    ordenarDecreciente(arreglo,dF);
    cout <<"\nDecreciente.El arreglo generado es: "<<endl;
    mostrarArreglo(arreglo,dF);

}