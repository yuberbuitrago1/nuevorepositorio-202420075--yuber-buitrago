#include <iostream>

using namespace std;

void evenAndOdd(){

    int values[8] = {2, 5, 7, 8, 10, 13, 16, 19};

    int counterEven = 0;
    int counterOdd = 0;

    for (int i = 0; i < 8; i++)
    {
        cout << "lista de numeros: " << values[i] << endl;
        if (values[i] % 2 == 0)
        {
            counterEven++;
        }
        else
        {
            counterOdd++;
        }
    }

    cout << "cantidad de numeros pares: " << counterEven << endl;
    cout << "cantidad de numeros impares: " << counterOdd << endl;

}

int main(){

    evenAndOdd();

    return 0;
}