/*
Realizar un algoritmo que almacene información de, como máximo, 500 libros en un arreglo estático. 
Un libro se define como un struct con los siguientes campos: 
titulo, autor, ISBN, editorial, cantidadHojas. 
El algoritmo finaliza luego de cargar el libro "El hobbit", el cual debe procesarse o cuando ya no quede espacio en el arreglo (lo que
suceda primero). 
Finalmente, imprimir el arreglo resultante mostrando todos los datos de cada libro. 
*/
#include <stdio.h>
#include <iostream>
using namespace std;

struct Libro{
    string titulo;
    string autor;
    string editorial;
    int ISBN;
    int cantidadHojas;
};

int cargarLibros(Libro arr[],int dl,int DF){
    Libro L;
    do
    {
        cout << "Se solicitara el ingreso del " << dl+1 << " libro: "<<endl;
        cout << "Nombre - (terminara con 'El Hobbit'): ";
        getline(cin >> ws, L.titulo);    
        cout << "Autor: ";
        getline(cin >> ws, L.autor);
        cout << "Editorial: ";
        getline(cin >> ws, L.editorial);
        cout << "Numero estandar indentificador internacional(ISBN): ";
        cin >> L.ISBN;
        cout << "Cantidad de hojas: ";
        cin >> L.cantidadHojas;
        arr[dl] = L;
        dl++;
    } while (L.titulo != "El Hobbit" && dl < DF);
    return dl;
}

void mostrarLibros(Libro arr[],int dl){
    cout << "Los libros ingresados son: "<<endl;
    for (int i = 0; i < dl; i++){
        cout << "\nLibro " << i+1<<endl;
        cout << "Libro: "       <<arr[i].titulo<<endl; 
        cout << "Autor: "       <<arr[i].autor<<endl; 
        cout << "Editorial: "   <<arr[i].editorial<<endl; 
        cout << "ISBN: "        <<arr[i].ISBN<<endl;
        cout << "Hojas: "       <<arr[i].cantidadHojas<<endl; 
    }
    
}


int main(){
    int const DF = 500;
    int dl=0;
    Libro arr[DF];


    dl = cargarLibros(arr,dl,DF);
    mostrarLibros(arr,dl);



}

