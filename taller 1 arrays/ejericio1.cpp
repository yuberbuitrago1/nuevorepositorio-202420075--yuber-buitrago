#include <iostream>

using namespace std;

void employees(){

    string employees[4];

    cout << "ingrese el nombre de los 4 empleados: " << endl;
    cin >> employees[0];
    cin >> employees[1];
    cin >> employees[2];
    cin >> employees[3];

    for (int i = 0; i < 4; i++)
    {
        string employ = employees[i];
        cout << "empleado numero: " << i << endl <<  "nombre: " << employ << endl << endl;
    }
    

}

int main(){

    employees();

    return 0;
}