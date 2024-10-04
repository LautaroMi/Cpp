/*
Escribe un programa que solicite al usuario ingresar un carácter y un número entero positivo. Luego imprime en 
pantalla un triángulo formado por el carácter ingresado, con altura igual al número que se ingresó.
Ejemplo: 
Ingresa un carácter: #
Ingresa un número entero positivo: 5
#
##
###
####
#####
*/

#include <iostream>
using namespace std;

int main(){
    char caracter;
    int numero; 
    cout << "Ingrese un caracter: "; cin >> caracter;
    cout << "Ingrese un numero entero positivo: "; cin >> numero;

    int contador = 0;
    while (contador < numero){
        contador++;
        for (int i = 0; i < contador; i++)
        {
            cout << caracter;
        }
        
        cout << endl;

    }
    
    




}