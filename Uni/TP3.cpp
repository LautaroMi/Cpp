/*
Escribe un programa que imprima un cuadrado de asteriscos de tamaño `n x n`, donde `n` es un número 
ingresado por el usuario.
Ejemplo:
Ingrese el tamaño del cuadrado: 5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/


#include <iostream>
using namespace std;

int main(){

    int numero;

    cout << "Ingrese el tamano del cuadrado: ";
    cin>> numero;

    for (int i = 0; i < numero; i++)
    {
        for (int  j= 0; j < numero; j++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    


}