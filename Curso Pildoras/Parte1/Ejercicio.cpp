#include <iostream>
using namespace std;

int main (){

    const double CALIDAD_MEDIA = 35.5;
    const double CALIDAD_ALTA = 55.3;
    const double IVA = 0.21;

    double cantidadMedia; double cantidadAlta; double cantidadTotal;
    double totalConImpuestos;

    cout << "¿Cuantos metros quieres instalar con calidad media? \n Cantidad: "; cin >> cantidadMedia;
    
    cout << "¿Cuantos metros quieres instalar con calidad alta? \n Cantidad: "; cin >> cantidadAlta;

    cantidadTotal = (cantidadAlta * CALIDAD_ALTA) + (cantidadMedia * CALIDAD_MEDIA);

    totalConImpuestos = (cantidadTotal * IVA) + cantidadTotal;

    cout << "El presupuesto final es: $ " << totalConImpuestos << "\nIVA: $"<<cantidadTotal*IVA << endl;
    cout << "El presupuesto tiene una validez de 30 dias.";






    return 0;
}