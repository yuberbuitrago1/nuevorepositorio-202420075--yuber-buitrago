#include <iostream>

using namespace std;

void mayorNumber(){

    int numbers[6] = {8, 12, 5, 20, 7, 15};
    int mayorNumber = 0;

    for (int i = 0; i < 6; i++)
    {
        int number = numbers[i];
        if (number > mayorNumber)
        {
            mayorNumber = number;
        }

    }
    
    cout << "el numero mayor es: " << mayorNumber << endl;

}

int main(){

    mayorNumber();

    return 0;
}