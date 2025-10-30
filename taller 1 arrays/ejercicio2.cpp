#include <iostream>

using namespace std;

void gradesStudents(){

    float grades[5];

    cout << "ingrese us notas: " << endl;
    cin >> grades[0];
    cin >> grades[1];
    cin >> grades[2];
    cin >> grades[3];
    cin >> grades[4];


    for (int i = 0; i < 4; i++)
    {
        float promediumGrades = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4]) / 5;
        cout << promediumGrades;

    }
    

}

int main(){

    gradesStudents();

    return 0;
}