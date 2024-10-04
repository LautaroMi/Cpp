#include <iostream>
using namespace std;

//Libreria de vectores
#include <vector>  

int main(){

    //Declarar vectores
    //1.
    vector <int> records (5);
    vector <char> letras (5);
    //2.
    vector <int> records2 {25,35,45,66};
    vector <char> letras2 {'a','b','c'};
    //3. .. .. .. (cantidad de elementos, valor que se almacenara de forma predeterminada )
    vector <double> salario_base (350, 2125.50);




    //recorrer un vector
    /*
    int i = 0;
    while (i<salario_base.size())
    {
        cout << salario_base[i] << endl;
        i++;
    }
    */

   //metodo at -> buscar un elemento por su posicion, el metodo at chequea si se pasa del limite el indice ingresado

    records2.at(3) = 100;


    //metodo push_back -> permite meter un elemento hacia el ultimo lugar

    records2.push_back(100);
    
    cout << records2.at((records2.size())-1);


}