#include <iostream>

using namespace std;

void totalFinesForCity(){
    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[6] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};
    int ciudad;
    float totalFines = 0;

    cout << "de que ciudad quiere ver las multas:" << endl;
    cout << "tunja = 0, 2, 5" << endl << "bogota = 1" << endl << "medellin = 3" << endl << "cali = 4" << endl << endl;
    cout << "ingrese el numero de la ciudad: ";
    cin >> ciudad;

    cout << "multas registradas en la ciudad de " << ciudades[ciudad] << ": " << endl;
    for (int i = 0; i < 6; i++)
    {
        if (ciudades[i] == ciudades[ciudad])
        {
            cout << placas[i] << " = " << multas[i] << endl;
            totalFines = totalFines + multas[i];
        }
    }
    
    cout << "el total de multas a pagar en la ciudad de " << ciudades[ciudad] << " es de: " << totalFines << endl;
}

int main(){

    totalFinesForCity();

    return 0;
}