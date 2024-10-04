/*
Escribe un programa que busque un número en una matriz dada y devuelva su posición. Si el número no se 
encuentra, debe indicarlo.
*/

#include <iostream>
using namespace std;

int main(){
    bool controlador = false;
    int valorFila; int valorColumna;
    int numero;
    int matriz[3][3] =  {{1,6,3},
                        {8,7,4},
                        {14,12,21}};

    cout << "Ingrese un numero para buscar en la matriz: ";cin >> numero;

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            if(matriz[f][c] == numero){
                valorColumna = c;
                valorFila = f;
                controlador = true;
                break;
            }
        }
    }
    

    if(controlador == true){
        cout << "El numero " << numero <<" se encontro en la fila ["<< valorFila+1 << "], columna [" << valorColumna+1 <<"]";
    }

    else{
        cout << "El numero no se encontro en la matriz.";
    }

}