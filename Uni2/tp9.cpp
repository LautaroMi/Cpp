/*
Ejercicio 9.
Escribir un programa que almacene en un arreglo los datos de los alumnos de una escuela luego de finalizado el
año académico. 
Como máximo, puede haber 5.000 alumnos. 
De cada alumno se debe guardar: 
nombre 
calificación obtenida en el primer, segundo y tercer trimestre del año académico. 
Imprimir el listado de nombres de alumnos mostrando un mensaje de "APTO" si el alumno supera o iguala la calificación de 5 para todas las notas o "NO APTO" si no lo alcanza. Utilizar un arreglo como campo del struct para almacenar las tres calificaciones.
*/
#include <iostream>
#include <stdio.h>

using namespace std;

struct Alumnos{
    string alumno = "";
    struct Notas{
        int primerTrimestre = 0;
        int segundoTrimestre = 0;
        int tercerTrimestre = 0;
    };
    Notas nota;
};

int cargarAlumnos(Alumnos arr[],int dl, int DF){
    Alumnos alumno1;
    while (alumno1.alumno != "Fin" && dl < DF){
        cout <<"Nombre del alumno('Fin' para terminar): ";
        cin >> alumno1.alumno;
        if(alumno1.alumno == "Fin"){
            continue;
        }
        cout <<"Calificacion trimestre 1: ";
        cin >> alumno1.nota.primerTrimestre;
        cout << "Calificacion trimestre 2: ";
        cin >> alumno1.nota.segundoTrimestre;
        cout << "Calificacion trimestre 3: ";
        cin >> alumno1.nota.tercerTrimestre;

        arr[dl] = alumno1;

        dl++;
    }    
    return dl;
}

void mostrarAlumnos(Alumnos arr[],int dl){
    for (int i = 0; i < dl; i++)
    {
        cout <<"-Alumno: " << arr[i].alumno<<endl;
        cout <<"-Notas del alumno. \nPrimer trimestre: "<<arr[i].nota.primerTrimestre <<"\nSegundo trimestre: "<<arr[i].nota.segundoTrimestre << "\nTercer trimestre: "<<arr[i].nota.tercerTrimestre<<endl;
        if ((arr[i].nota.primerTrimestre < 5) ||(arr[i].nota.segundoTrimestre < 5) || (arr[i].nota.tercerTrimestre < 5)){
            cout << "NO APTO"<<endl;
        }
        else{
            cout << "APTO" <<endl;
        }
        
    }
    
}



int main(){
    int dl = 0;
    const int DF = 5000;
    Alumnos arr[DF];

    dl = cargarAlumnos(arr,dl,DF);

    mostrarAlumnos(arr,dl);



}