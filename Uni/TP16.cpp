/*
Escribir un programa para ser utilizado en una ventanilla de venta de entradas de un pequeño teatro con 
capacidad para 50 personas. Las filas están identificadas de la 0 a la 4 y cada fila tiene asientos numerados de 1 
a 10. Se debe registrar, por cada asiento, si está libre o no. Al iniciar el programa, todos los asientos están libres.
Cuando alguien desea comprar una entrada, se deben informar qué localidades están libres. Entonces el cliente 
deberá elegir su asiento (indicando fila y número de asiento) y éste se marcará como vendido. Si ya se vendieron 
todas las entradas, no se debe permitir elegir asiento.
*/

#include <iostream>
using namespace std;

void Menu (){
    cout << "Ventanilla de venta de entradas."<<endl;
    cout << "Elija la opcion: "<<endl;
    cout << "0.Salir."<<endl;
    cout << "1.Comprar entradas."<<endl;
    cout << "Opcion: ";
}

void MostrarArreglo (int arr[5][10]){
    cout << "Libre(L) - Ocupado(O)"<<endl;
    for (int i = 0; i < 6; i++){
        if (i != 0){
            cout << i-1 <<" ";        
        }
        else{
            cout << "X ";
        }
        for(int c = 0; c < 10;c++){
            if (i == 0){
                cout << c<< " " ;
            }
            else{
                if(arr[i-1][c] == 1 ){
                    cout << "L|";
                }
                else{
                    cout << "O|";
                }}}
        cout <<endl;
        }};

int main(){
    int totalentradas = 0;
    const int DF_filas = 5;
    const int DF_columnas = 10;
    int entradas[DF_filas][DF_columnas]; 
    int controlador=-1;
    

//Iniciar todos libres (1 -> Libre . 0 -> Ocupado)
for (int f = 0; f < DF_filas; f++){
    for (int c = 0; c < DF_columnas; c++){
        entradas[f][c] = 1;
    }
}
    do
    {
        if (totalentradas == 50){
            break;
        }
        //mostrar menu
        Menu();
        //eleguir opcion del menu
        cin >> controlador;
        switch (controlador)
        {
        case 0:
            break;
        case 1:
            int fila;
            int columna;
            cout << "Se mostraran las butacas.";
            MostrarArreglo(entradas);
            cout << "Indique la posicion de butaca que quiere comprar: "<<endl;
            cout << "Fila: ";cin>> fila;   
            cout <<"Columna: ";cin>>columna;
            
            if (entradas[fila][columna] == 1){
                entradas[fila][columna] = 0;
                totalentradas++;
            }
            else{
                cout << "\n\n\nLa butaca ingresada no es valida."<<endl;
            }
            break;
        default:
            cout << "\n\n\nIngresa una opcion valida."<<endl;
            break;
        }

        
    } while (controlador != 0);

    cout << "\n\n\nLa sala actualmente: "<<endl;
    MostrarArreglo(entradas);

    cout << "\n\n\n##El programa ha finalizado correctamente##";
}