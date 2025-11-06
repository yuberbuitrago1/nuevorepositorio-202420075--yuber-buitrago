#include <iostream>

using namespace std;

void promediumAge(){

    int ages[6] = {18, 21, 25, 30, 27, 22};
    float sumAges = 0;

    for(int n = 0; n < 6; n++)
    {
        cout << "edad " << n << ": " << ages[n] << endl;

        sumAges = sumAges + ages[n];

    }

    cout << "el promedio de edades es de: " << sumAges/6 << " años" << endl;
}


int main(){

    promediumAge();

    return 0;
}