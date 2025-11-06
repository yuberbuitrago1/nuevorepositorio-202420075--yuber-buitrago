#include <iostream>

using namespace std;

void mayor18Years(){

    string nombres[5] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"}; 
    int edades[5] = {20, 16, 22, 15, 19};

    for(int k = 0; k < 5; k++)
    {
        int edad = edades[k];
        if(edad >= 18)
        {
            cout << nombres[k] << ": " << edades[k] << "años" << endl;
        }
    }


}


int main(){

    mayor18Years();

    return 0;
}