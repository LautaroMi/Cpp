/*
Contar la cantidad de números negativos leídos desde teclado. La serie termina con el valor cero (0), el cual no
debe procesarse. ¿Qué cambiaría si debiera procesarse también el último número ingresado (0)?
*/

#include <iostream>
using namespace std;

int main()
{


    int numero; int contadorNegativos = 0;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    while (numero != 0){
        if(numero < 0 ){
            contadorNegativos++;
        }
        cout << "Ingrese un numero: ";
        cin >> numero;

    }
 
    cout << "Se ingresaron " << contadorNegativos << " numeros negativos" <<endl; 
    

    
    return 0;
}
