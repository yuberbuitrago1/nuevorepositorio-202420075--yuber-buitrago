#include <iostream>

using namespace std;

void productsAndPrices(){

    string products[3] = {"Pan", "Leche", "Queso"}; 
    float prices[3] = {1500, 3200, 4800};

    for (int i = 0; i < 3; i++)
    {
        string product = products[i];
        float price = prices[i];
        cout << "producto: " << product << endl << "precio: " << price << endl << endl;
    }
    

}

int main(){

    productsAndPrices();

    return 0;
}