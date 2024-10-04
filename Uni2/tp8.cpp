/*
Ejercicio 8.

Realizar un programa que almacene en un arreglo la lista de invitados a una fiesta. 
El salón donde se realizará, tiene capacidad máxima para 150 personas.
De cada invitado se conoce su:
-nombre, -apellido, -sexo y -edad. 
Se ingresarán datos hasta que el nombre sea igual a “ZZZ” o hasta que la capacidad del salón esté completa.


Una vez finalizada la carga:
A. Informar la cantidad de invitados que asistirán a la fiesta.
B. Realizar una función que liste los nombres de las mujeres cuya edad sea <= 20.
C. Realizar una función que, dado un apellido y nombre, permita eliminar un invitado en caso de no poder
asistir.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

struct Invitados{
    string nombre;
    string apellido;
    string sexo;
    int edad;
};

int menores(Invitados arr[],int dl, Invitados mujeres[], int dlmujeres){
    for (int i = 0; i < dl; i++)
    {
        if (arr[i].edad <= 20 && arr[i].sexo == "Femenino"){
            mujeres[dlmujeres] = arr[i]; 
            dlmujeres++;
        }
    }
    return dlmujeres;
}

void mostrarInvitados(Invitados arr[],int dl){
    for (int i = 0; i < dl; i++){
        cout << "\n.Invitado " << i+1 <<": " << endl;
        cout << ".Nombre: " << arr[i].nombre <<endl;
        cout << ".Apellido: " << arr[i].apellido <<endl;
        cout << ".Sexo(M/F): " << arr[i].sexo<<endl;
        cout << ".Edad: " << arr[i].edad<<endl;
    }
    cout << "\nSe han mostrado todos los invitados!";
}

int cargarInvitados(Invitados arr[],int dl,int df){
    Invitados I;
    cout << "Se ingresaran solicitara informacion sobre los invitados: "<<endl;
    cout << dl+1 <<" invitado: "<<endl;
    cout << "Nombre - ('ZZZ' para finalizar): ";
    cin >> I.nombre;


    while (I.nombre != "ZZZ" && dl < df)
    {
        cout << "Apellido: ";
        cin >> I.apellido;
        cout << "Sexo(Masculino/Femenino): ";
        cin >> I.sexo;
        cout << "Edad: ";
        cin >> I.edad;
        arr[dl] = I;
        dl++;
        cout << dl+1 <<" invitado: "<<endl;
        cout << "Nombre - ('ZZZ' para finalizar): ";
        cin >> I.nombre;
    }
    return dl;
}

int eliminarInvitado(Invitados arr[],int dl){
    string nombre;
    string apellido;
    cout << "\nSe le solicitara el ingreso de datos del invitado a eliminar."<<endl;
    cout << "Ingrese nombre del invitado: ";
    cin >> nombre;
    cout << "Ingrese apellido del invitado: ";
    cin >> apellido;
    int posicion;

    for (int i = 0; i < dl; i++){

        if(arr[i].apellido == apellido && arr[i].nombre == nombre){
            posicion = i;
            dl--;
            break;
        }
    }
    for (int i = posicion; i < dl; i++)
    {
        Invitados aux = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = aux;
    }
    
    return dl;
    
}



int main(){
    
    int const DF = 150;
    int dl = 0;
    int dlMujeres = 0;

    Invitados mujeres[DF];

    Invitados arr[DF];

    dl = cargarInvitados(arr,dl,DF);
    cout <<"#####################################\nSe mostraran los invitados."<<endl;
    mostrarInvitados(arr,dl);

    // A. Informar la cantidad de invitados que asistirán a la fiesta.
    cout << "\nAsistiran " << dl << " invitados a la fiesta!"<<endl;


    //B. Mostrar mujeres menores a 20;
    dlMujeres = menores(arr,dl,mujeres,dlMujeres);
    cout <<"#####################################\nSe mostraran las invitadas menores a 20 años."<<endl;
    mostrarInvitados(mujeres,dlMujeres);

    //C. Busqueda y Eliminacion por nombre y apellido.

    if (dl > 0){

        int opcion;
        do
        {
            cout << "\n\nMenu para eliminar un invitado: "<<endl;
            cout << "1.Eliminar invitado."<<endl;
            cout << "2.Salir"<<endl; 
            cout << "Ingrese la opcion que quiera: ";
            cin >> opcion;
            switch (opcion){
            case 1:
                dl = eliminarInvitado(arr,dl);
                break;
            case 2:
                cout << "\nNo se eliminara ningun invitado."<<endl;
                break;
            default:
                cout << "\nIngrese una opcion valida.";
                break;
            };
        } while (opcion != 2);
        
        mostrarInvitados(arr, dl);
    }

    

}