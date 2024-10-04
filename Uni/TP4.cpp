/*
Cargar un arreglo con (5)20 números enteros ingresados por teclado de manera que el arreglo siempre se
encuentre ordenado en forma ascendente. El arreglo se cargará por completo.
Hacer dos variantes, suponiendo que el usuario carga los datos de las siguientes formas:
a) El usuario ingresa los números en orden ascendente (Inserción al final)
b) El usuario ingresa los números sin un orden en particular (Inserción ordenada)
*/


// OPCION A:
#include <iostream>
using namespace std;

int main(){
    const int DF = 5;
    int DL = 0;
    int arreglo[DF]={};

    /*cout << "Ingrese de manera ascendete 5 numeros enteros."<<endl;
    for (int i = 0; i < DF; i++)
    {
        cout << i+1 << ". Numero: ";
        cin>> arreglo[i];
        DL++;
    };*/
       
    /*OPCION B*/

    cout << "Ingrese 5 numeros enteros. "<< endl;
    for (int i = 0; i < DF; i++)
    {
        cout << i+1 << ". Numero: ";
        cin>> arreglo[i];
        DL++;
    }
    /*Ordenar*/
    for (int i = 0; i < DL; i++)
    {
        for (int j = 0; j < DL ;j++)
        {
            int aux;
            if (arreglo[i] < arreglo[j]){
                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }}}
    /*
    Mostrar arreglo
    */
   cout << "Los numeros almacenados son: "<<endl;
   for (int j = 0; j < DL; j++)
   {
    cout << arreglo[j] << " "; 
   };
   

    return 0;



}