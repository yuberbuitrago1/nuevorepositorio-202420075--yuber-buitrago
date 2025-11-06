#include <iostream>

using namespace std;

void streProducts(){

    string productos[6] = {"Manzanas", "Peras", "Uvas", "Bananas", "Mangos", "Fresas"};
    float precios[6] = {1500, 2300, 1800, 3100, 2700, 2600};
    float sumPrices = 0;

    // suma de precios
    for(int k = 0; k < 6; k++)
    {
        float price = precios[k];
        cout << "producto: " << productos[k] << "  precio: " << precios[k] << endl;

        sumPrices = sumPrices + precios[k];
    }

    // precios mayores a 2500
    cout << endl << "precios mayores a 2500: " << endl;

    for (int n = 0; n < 6; n++)
    {
        float price = precios[n];
        if (price >= 2500)
        {
            cout << productos[n] << ": " << precios[n] << endl;
        }

    }


    cout << endl << "total a pagar: " << sumPrices << endl;

}


int main(){

    streProducts();

    return 0;
}