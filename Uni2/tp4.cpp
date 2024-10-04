/*Ejercicio 4.
En un comercio de artículos electrónicos se lleva un registro de los precios de los productos disponibles. El
administrador desea ordenar estos precios de menor a mayor para facilitar su visualización. Como desarrollador,
te han solicitado implementar un programa en C++ que realice esta tarea utilizando el algoritmo de
ordenamiento por inserción.
Requerimientos:
• El programa debe permitir al usuario ingresar la cantidad de productos y sus respectivos precios.
• Se debe implementar el algoritmo de ordenamiento por inserción para ordenar los precios en orden
ascendente.
• Una vez ordenados, el programa debe mostrar los precios ordenados en pantalla.
Instrucciones adicionales:
• Utilizar un arreglo para almacenar los precios.
• Implementar una función separada que realice el ordenamiento por inserción.
• La cantidad de productos y los precios deben ser ingresados por el usuario.

*/

#include <iostream>
using namespace std;


void mostrarPrecios(float arr[],int dF){
    cout << "El listado de precios actual es: "<<endl;
    for (int i = 0; i < dF; i++){
        cout << arr[i] << " ";
    }
    
}
void cargarPrecios(float arr[],int dF){
    cout << "Se solicitara el precio de los productos. "<<endl;
    for (int i = 0; i < dF; i++){
        
        cout << "Producto " << i+1 << ": ";
        cin >> arr[i];
    }
}

void ordenarInsercion(float arr[], int dF){
    for (int i = 1; i < dF; i++) {
        int temp = arr[i];
        int j = i-1;
        while (j >= 0 && temp < arr[j]) {
            arr[j+1] = arr[j]; 
            j--;
        }
        arr[j+1] = temp;
    }
}


int main(){
    int num;
    cout << "Ingrese la cantidad de productos: ";    
    cin >> num;
    int const dF = num;
    float arregloPrecios[dF];
    cargarPrecios(arregloPrecios,dF);
    ordenarInsercion(arregloPrecios,dF);
    mostrarPrecios(arregloPrecios,dF);





}