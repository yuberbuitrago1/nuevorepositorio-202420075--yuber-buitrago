#include <iostream>

using namespace std;

void highPriceAndLowPrice(){

    float prices[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
    float sumPrices = 0;
    float highPrice = 0;
    float lowPrice = prices[0];

    // para promedio de precios
    for(int n = 0; n < 6; n++)
    {
        cout << "producto " << n << " , precio: " << prices[n] << endl;
        sumPrices = sumPrices + prices[n];
    }

    //para hallar el precio mayor
    for (int k = 0; k < 6; k++)
    {
        float price = prices[k];
        if (price > highPrice)
        {
            highPrice = price;
        }

    }

    //para hallar precio menor
    for (int i = 1; i < 6; i++)
    {
        float price = prices[i];
        if (lowPrice > price)
        {
            lowPrice = price;
        }
    }

    cout << "la suma de precios es de: " << sumPrices << endl;
    cout << "el precio mayor es: " << highPrice << endl;
    cout << "el precio menor es de : " << lowPrice << endl;

}


int main(){

    highPriceAndLowPrice();

    return 0;
}