#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <double> almacen;
    int controlador; double elemento;
    cout << "Cuantos elementos quieres agregar: "; cin>> controlador;


    cout << "Se agregaran " << controlador << " elementos:" <<endl;
    for (int i = 1; i <= controlador; i++){
        cout << i << ". " ; cin >> elemento;
        almacen.push_back(elemento);
    }
    
    for (int i = 0; i < controlador; i++)
    {
        cout << almacen.at(i) << " ";
    }
    


}