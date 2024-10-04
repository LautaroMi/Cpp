/*
Escribir un programa que permita al usuario gestionar los pagos de la cuota de un club. Para ello, almacenar en
un arreglo los números de DNI de los socios que pagaron. El club no tiene más de 200 socios.
Permitir al usuario buscar un DNI en el arreglo y, si el DNI está en el arreglo, imprimir "Cuota al día". Si no está,
imprimir "Socio con deuda".
También se debe permitir al usuario eliminar un DNI del arreglo, en caso de haberlo ingresado erróneamente.
Finalmente, imprimir todo el arreglo.
*/

#include <iostream>
using namespace std;

int main(){
    
    //int DL = 0;
    const int DF = 10;
    int arregloDNI[DF] = {54321, 54312, 54231, 65432,64312,23154,12354,76543, 87654, 98765};
    int DNIingresado; int opcion;

    bool ControladorCuota;

    //Buscar DNI


    do
    {

    cout << "Opciones del sistema:" << endl;

    cout << "0. Salir" <<endl;
    cout << "1. Verificar cuota" <<endl;
    cout << "2. Eliminar DNI" <<endl;
    
    cout << "Opcion a eleguir: ";
    cin>> opcion;
    if (opcion == 1){
    cout << "Ingrese su DNI: "; cin>> DNIingresado;
    for (int i = 0; i < DF; i++)
    {
        if(DNIingresado == arregloDNI[i]){
            ControladorCuota = true;
            break;
        }
        else{
            ControladorCuota = false;
        }
    }
    if (ControladorCuota == true)
    {
        cout << "La cuota esta al dia"<<endl;
    }
    
    else{
        cout << "Socio con deuda"<<endl;
    }
    }//termina for de cuota al dia

    if(opcion == 2){
    cout << "Ingrese DNI a eliminar: "; cin >> DNIingresado;
    for(int i = 0; i < DF; i++){
        int aux;
        if(DNIingresado == arregloDNI[i]){
            arregloDNI[i] = 0;
            aux = arregloDNI[DF-1] ;
            arregloDNI[DF-1] = arregloDNI[i];
            arregloDNI[i] = aux; 
            break;
        } 
    }
    cout << "Los DNI almacenados son: "<<endl;
    for (int j = 0; j < DF; j++)
    {
    cout << arregloDNI[j] << " / "; 
    };
    }//Termina for eliminar dni
    } while(opcion != 0);

    cout << "El programa finalizo.";

}