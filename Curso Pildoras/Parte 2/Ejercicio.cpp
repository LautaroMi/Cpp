#include <iostream>
using namespace std;

int main(){

    int mi_matriz[4][5];


    //Usar bucle for con arrays

    for (int fila = 0; fila < 4; fila++){
        for (int columna = 0; columna < 5; columna++){
            cin>> mi_matriz[fila][columna];
        }
        
    }
    
    //mostrando array

    cout << "Mostrando los valores almacenados en el array" <<endl;

    for (int fila = 0; fila < 4; fila++){
        for (int columna = 0; columna < 5; columna++){
            cout << mi_matriz[fila][columna] << " ";
        }

        cout << endl;
    
    }

}