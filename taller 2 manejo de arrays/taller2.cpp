#include <iostream>

using namespace std;

void printArray(string products[], int price[], int size){

    for (int i = 0; i < size; i++)
    {
        cout << "producto " << i + 1  << ": " << products[i] << "  valor de: " << price[i] << endl;
    }
    
}

int userAccion(){
    int userOpcion;
    
    cout << "----------------------------------------------" << endl;
    cout << "sistema de ventas, seleccione una opcion: " << endl;
    cout << "1. Registrar o reiniciar ventas" << endl;
    cout << "2. Mostrar todas las ventas" << endl;
    cout << "3. Modificar una venta" << endl;
    cout << "4. Buscar una venta" << endl;
    cout << "5. Mostrar ventas dentro de un rango de precios" << endl;
    cout << "6. Calcular total de ventas" << endl;
    cout << "7. Salir" << endl << endl;

    cout << "ingrese una opcion: ";
    cin >> userOpcion;
    cout << "----------------------------------------------" << endl;

    return userOpcion;

}

string* getNewList(int size) {
    string* titles = new string[size];
    for (int i = 0; i < size; i++)
    {
        string newValue;
        cout << "Ingrese el valor para la posicion " << i + 1 << ": ";
        cin >> newValue;
        titles[i] = newValue;
    }
    return titles;
}

void run(){
    int arraySize = 0;
    string* titles = getNewList(arraySize);

    bool running = true;
    
    while (running)
    {
        int userOpcion = userAccion();
        switch (userOpcion)
        {
        case 1:
        
            break;
        case 2:

            break;
        case 3:
        
            break;
        case 4:

            break;
        case 5:
        
            break;
        case 6:

            break;
        case 7:
            delete[] titles;
            running = false;
            break;
    default:
        break;
    }
    }
    
}

int main(){

    return 0;
}