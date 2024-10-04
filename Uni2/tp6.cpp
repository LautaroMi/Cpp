#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    struct tipoZapato
    {
        string estilo;
        double precio;
    };

    // ¿Qué salidas producirá el siguiente codigo?

    tipoZapato zapato1, zapato2;
    zapato1.estilo = "Sandalia";
    zapato1.precio = 9.99;
    cout << zapato1.estilo << " $" << zapato1.precio << endl; //Imprimira los datos del zapato 1 y su precio
    zapato2 = zapato1;
    zapato2.precio = zapato2.precio / 9;
    cout << zapato2.estilo << " $" << zapato2.precio << endl; //Es el mismo estilo y su precio es 90% menos

    


}