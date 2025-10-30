#include <iostream>

using namespace std;

void gradesStudents(){

    float grades[5] = {3.5, 4.0, 2.8, 3.9, 4.2};
    float sumGrades = 0;


    for (int i = 0; i < 5; i++)
    {
        float grade = grades[i];
        // sumGrades += grade;
        sumGrades = sumGrades + grade;

    }
    
    cout << "el promedio de notas es de: "<< sumGrades / 5 << endl;
}

int main(){

    gradesStudents();

    return 0;
}