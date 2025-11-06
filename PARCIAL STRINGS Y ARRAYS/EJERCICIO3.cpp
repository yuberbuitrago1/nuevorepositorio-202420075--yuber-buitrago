#include <iostream>

using namespace std;

void totalFinesForCity(){
    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[6] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};
    string cityy;
    float totalFines = 0;

    cout << "de que ciudad quiere ver las multas:" << endl;
    cout << "Tunja " << endl << "Bogotá" << endl << "Medellín" << endl << "Cali" << endl << endl;
    cout << "*NOTA: !!ESCRIBIR DE LA MISMA MANERA EN LA QUE SE EN PANTALLA, CON TILDES Y MAYUSCULAS!!*" << endl;
    cout << "ingrese el nombre de la ciudad: ";
    cin >> cityy;

    cout << "multas registradas en la ciudad de " << cityy << ": " << endl;
    for (int i = 0; i < 6; i++)
    {
        if (ciudades[i] == cityy)
        {
            cout << placas[i] << " = " << multas[i] << endl;
            totalFines = totalFines + multas[i];
        }
    }
    
    cout << "el total de multas a pagar en la ciudad de " << cityy << " es de: " << totalFines << endl;
}

int main(){

    totalFinesForCity();

    return 0;
}