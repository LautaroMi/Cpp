#include <iostream>
using namespace std;

int main()
{
    /*Escribir un programa que imprima los números del 1 al 100, mostrando de a cinco por renglón.*/

    int contador=0;
    for (int i = 0; i <= 100; i++){
        cout << i << " " ;
        if(contador == 5){
            cout << endl;
            contador = 0;
        }
        contador++;
    }

    

    return 0;
}