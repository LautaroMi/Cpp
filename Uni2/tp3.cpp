/*
    Busqueda binaria en un arreglo de numeros donde se pueden repetir numeros. 
    Devolver la primer ocurrencia del numero buscado.

*/



#include <iostream>
using namespace std;

int busquedaBinaria(int arr[],int dl, int buscado){
    int inicio = 0;
    int fin = dl - 1;
    while (inicio <= fin){
        int medio = (inicio + fin) / 2;
        if (arr[medio] == buscado)
        {
            return medio;
        }
        else{
            if (arr[medio] > buscado)
            {
                fin = medio - 1;
            }
            else{
                inicio = medio + 1;
            }
        }
    }
    return -1;
    
}



int main(){
    int const dF = 10;
    int arreglo[dF] = {12,24,24,54,65,87,97,100,231,547};
    int numBuscar;

    cout << "Numero a buscar: ";
    cin >> numBuscar;
    int control = busquedaBinaria(arreglo,dF,numBuscar);

    if (control != -1)
    {
        cout << "\nEl numero Si se encuentra en el arreglo. (posicion: " << control << " )";
    }
    else{
        cout << "\nEl numero NO se encuentra en el arreglo.";
    }









}