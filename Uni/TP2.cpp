/*Escribe un programa que imprima la tabla de multiplicar del 1 al 10 utilizando estructuras de control anidadas.*/

#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i < 11; i++){
        cout << "####  TABLA DEL "<< i << "   ####"<<endl;
        for (int j = 1; j < 11; j++){
            cout << i << " x " << j << " = " << i*j << endl;
        }

        cout << endl;
    
    }
    

}