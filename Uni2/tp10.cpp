/*
Ejercicio 10.
La universidad posee información histórica sobre los estudiantes (no más de 1.000) de una materia determinada.
De cada uno almacena: 
nombre.
apellido. 
legajo. 
cantidad de inasistencias a clase. 
calificación obtenida.
Almacenar esta información en un arreglo de structs. 
Se solicita generar los siguientes reportes:

a) Imprimir nombre y apellido de los alumnos que tuvieron más de 5 inasistencias.

b) Imprimir número de legajo de los alumnos cuya calificación promedio sea mayor o igual a la calificación
promedio total (requiere calcular un promedio de las calificaciones de todos los alumnos en el listado).

c) Imprimir el número de legajo de aquellos alumnos que tienen promedio mayor o igual a 9.

d) Dado el legajo de un alumno, eliminarlo del listado.
Nota: analizar si es posible reutilizar código en más de uno de los incisos.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

struct Estudiantes{
    string nombre="";
    string apellido="";
    int legajo=0;
    int inasistencias=0;
    int nota=0;
};

int cargarEstudiante(Estudiantes arr[], int dl,const int DF){
    Estudiantes alumno1;
    while (alumno1.nombre != "Fin" && dl < DF){
        cout <<"Nombre del alumno('Fin' para terminar): ";
        cin >> alumno1.nombre;
        if(alumno1.nombre == "Fin"){
            continue;
        }
        cout <<"Apellido: ";
        cin >> alumno1.apellido;
        cout <<"Legajo: ";
        cin >> alumno1.legajo;
        cout <<"Inasistencias: ";
        cin >> alumno1.inasistencias;
        cout <<"Nota: ";
        cin >> alumno1.nota;
        arr[dl] = alumno1;

        dl++; 
    }
    return dl;
};
int calcularPromedio(Estudiantes arr[],int dl){
    int promedio=0;
    int i=0;
    for (int i ; i < dl; i++){
        promedio += arr[i].nota;
    }
    promedio = promedio / i;
    return promedio;
}
void mostrarEstudiante(Estudiantes arr[],int dl,int inasistencias,int promedio){
    for (int i = 0; i < dl; i++){
        if(arr[i].inasistencias > inasistencias ){
            cout <<"Alumno " << i+1 << endl;
            cout <<"Nombre: " << arr[i].nombre<< endl;
            cout <<"Apellido: " << arr[i].apellido<< endl;
            cout <<"Legajo: " << arr[i].legajo<< endl;
            cout <<"Inasistencias: " << arr[i].inasistencias<< endl;
            cout <<"Nota: " << arr[i].nota<< endl;
        }
        if (arr[i].nota >= promedio){
            cout << "\n.Legajo: "<< arr[i].legajo << endl;
        }
        
    }
    
}



int main(){

    const int DF = 1000;
    int dl = 0;
    int promedio=0;
    Estudiantes arr[DF];

    dl = cargarEstudiante(arr,dl,DF);

    cout << "<\n\nAlumnos con mas de 5 inasistencias: "<<endl;
    mostrarEstudiante(arr, dl, 5 , 11);

    promedio = calcularPromedio(arr, dl);
    cout << "\nSe mostraran los alumnos con nota superior al promedio. ";
    mostrarEstudiante(arr, dl, 10000,promedio);


}