#include <iostream>

using namespace std;

void employees(){

    string employees[4] = {"Ana", "Luis", "María", "Pedro"};

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