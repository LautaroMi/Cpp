/*
    Busqueda secuencial en un arreglo de numeros enteros ordenado de menor a mayor.
    Se debe solicitar el ingreso por teclado una serie de numeros.
    Ordenar los numeros ingresados.
    Opcion de busqueda, solicitando al usuario un numero e informar si se encuentra o no en el arreglo.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

void cargarArreglo(int arr[],int & dl, int df){
        int num = 1;
        cout << "Se solicitara el ingreso numeros enteros."<<endl;

        while (num != 0 && dl < df){
            cout << dl+1 <<". numero('0' para finalizar): ";
            cin >> num;
            if (num != 0 ){
                arr[dl] = num;
                dl++;
                if (df-dl != 0)
                {
                    cout << "Quedan disponibles {" << df-dl << "} lugar en el arreglo."<<endl;
                }
                else{
                    cout << "No quedan mas lugares disponibles.";
                }            
            }
        }
        cout << "\nLa carga de numeros ha finalizado."<<endl;

}

void mostrarArreglo(int arr[],int dl){
    cout << "El arreglo esta compuesto por: [" << arr[0];
    for (int i = 1; i < dl; i++)
    {
        cout << ", " << arr[i] ;    
    }
    cout << "]";
}

void ordenarArreglo(int arr[],int dl){
    for (int i = 0; i < dl-1; i++)
    {
        for (int j = 0; j < dl-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {            
            int aux = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = aux;
            }
        }
        
    }
    
}

int busquedaSecuencial(int arr[], int dl, int buscado){
    int i = 0;
    // Si el indice es mejor a la cantidad de elementos Y el numero del indice es menor al buscado...
    while (i < dl && arr[i] < buscado){
        i++;
    }
    // Si el indice es mejor a la cantidad de elementos Y el numero del indice es igual al buscado...
    if (i < dl && arr[i] == buscado){
        return i;
    }
    else{
        return -1;
    }
}



int main(){

    int const dF = 10;
    int dL = 0;
    int ArrNumeros[dF]{0};
    int numBuscar;
    string controlador;


    cargarArreglo(ArrNumeros,dL,dF);
    ordenarArreglo(ArrNumeros,dL);

    
    if(dL > 0){
        mostrarArreglo(ArrNumeros, dL);
        cout << "\nIngrese 'Si' para buscar un numero en el arreglo: ";
        getline(cin >> ws, controlador);
        if(controlador == "Si"){
            cout << "Ingrese el numero a buscar: ";
            cin >> numBuscar;
            int control = busquedaSecuencial(ArrNumeros,dL,numBuscar);

            if(control != -1){
                cout << "El numero " << numBuscar << " SI se encuentra en el arreglo!";
            }
            else{
            cout << "El numero " << numBuscar << " NO se encuentra en el arreglo!";
            }
        }
        else{
            cout << "No se buscará ningun numero.";
        }
        
        
        
        
 
    }
    else{
        cout << "El arreglo esta vacio.";
    }
    
    cout << "\n\nEl programa ha finalizado.";

}