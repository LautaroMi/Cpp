/*
Implementar la función Buscar elemento que reciba un arreglo de números enteros, su dimensión lógica y un 
número por parámetro e indique si dicho número existe en el arreglo.

*/

#include <iostream>
using namespace std;

void BuscarElemento (int arreglo[],int DL,int numero){
    bool controlador = false;
    for (int i = 0; i < DL; i++){
        if (arreglo[i] == numero){
            controlador = true;
            break;
        }        
    }
    if (controlador == true)
    {
        cout << "El numero se encuentra en el arreglo.";
    }

    else{
        cout << "El numero NO se encuentra en el arreglo.";
    }
};



int main(){
    int DL = 0;
    const int DF = 50;
    int arreglo[DF]{};
    int numero;
    int numeroabuscar;

    cout << "Rellenar arreglo con numeros entero.\nIngrese '0' para finalizar."<< endl;
    int i=0;
    do
    {
        cout <<"Ingrese un numero: ";cin>>numero;
        arreglo[i] = numero;
        i++;
        DL++;
    } while (numero != 0);
    

    cout << "Ingrese un numero que quiera revisar si se encuentra en el arreglo: "; cin >> numeroabuscar;
    BuscarElemento(arreglo, DL, numeroabuscar);

    return 0;
}