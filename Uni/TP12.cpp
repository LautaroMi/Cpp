/*
Escribir las sentencias necesarias para:
A. Declarar un arreglo de enteros de 7 filas y 10 columnas
B. Asignar el valor 105 a la posición que se encuentra en la segunda fila, quinta columna.
C. Asignar en todas las posiciones de la cuarta fila el valor 5.
D. Imprimir todos los valores de la matriz, colocando cada fila en una nueva línea.
E. Permutar las columnas 3 y 5.
F. Sumar todos los elementos de las filas 2 y 6.
G. Imprimir todos los valores de la tercera columna.
H. Hallar en qué fila y columna se encuentra almacenado el mayor elemento.
*/

#include <iostream>
using namespace std;

int main(){

const int DF_FILAS = 7; 
const int DF_COLUMNAS = 10;

int arreglo[DF_FILAS][DF_COLUMNAS];

//rellenar arreglo:

cout << "Rellenar matriz." << endl;
for (int f = 0; f < DF_FILAS; f++){
    for (int c = 0; c < DF_COLUMNAS; c++){
        arreglo[f][c] = 4;
    }
    
}
//B. asignar 105
arreglo[1][4] = 105;



// asignar valor 5 a la fila 4
for (int c = 0; c < DF_COLUMNAS; c++){
            arreglo[3][c] = 5;
        }
    
    //E. Permutar las columnas 3 y 5.

for (int f = 0; f < DF_FILAS; f++){
    int aux = arreglo [f][2];
    arreglo[f][2] = arreglo[f][4];
    arreglo[f][4] = aux;
    

}

//FF. Sumar todos los elementos de las filas 2 y 6.
int sumaTotal = 0;
for (int c = 0; c < DF_COLUMNAS; c++)
{
    sumaTotal += arreglo[1][c];
    sumaTotal += arreglo[5][c];
}
cout << "La suma entre la fila 2 y 6 es: " << sumaTotal << endl;


//G. Imprimir todos los valores de la tercera columna.

cout << "Valores de la tercera columna: " << endl;
for (int f = 0; f < DF_FILAS; f++)
{
    cout << arreglo [f][2] << " ";
}


//H.Hallar en qué fila y columna se encuentra almacenado el mayor elemento.
int elementoMayor= arreglo[0][0];
for (int i = 0; i < DF_FILAS; i++)
{
    for (int c = 0; c < DF_COLUMNAS; c++)
    {
        if (elementoMayor < arreglo[i][c])
        {
            elementoMayor = arreglo[i][c];
        }   
    }
}
cout << "\nEl elemento mayor de la matriz es: " << elementoMayor << endl;

//mostrar matriz
cout << "La matriz es: " <<endl;
for (int f = 0; f < DF_FILAS; f++)
{
    for (int c = 0; c < DF_COLUMNAS; c++)
    {
        cout << arreglo[f][c] << " ";


    }
    cout << endl;
}













}