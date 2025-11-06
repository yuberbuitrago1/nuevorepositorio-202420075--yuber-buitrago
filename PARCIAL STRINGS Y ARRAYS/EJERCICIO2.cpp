#include <iostream>

using namespace std;

void filterCitiesForRangeOfTemperature(){

    string ciudades[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga","Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperaturas[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};
    float rangeHigh = 0;
    float rangeLow = 0;
    float promediumTemperatures = 0;
    int counterCities = 0;

    cout << "ingrese la temperatura minima: ";
    cin >> rangeLow;
    cout << "ingrese la temperatura maxima: ";
    cin >> rangeHigh;


    cout << endl << "temperaturas en el rango: " << endl << endl;
    for (int i = 0; i < 10; i++)
    {
        char temperature = temperaturas[i];

        if (rangeHigh >= temperature && temperature >= rangeLow)
        {
            counterCities++;
            cout << ciudades[i] << ": " << temperaturas[i] << endl;
            promediumTemperatures = promediumTemperatures + temperaturas[i];
        }
    }
    
    cout << endl << "temperaura promedio de el rango establecido: " << promediumTemperatures/counterCities << endl;
}

int main(){

    filterCitiesForRangeOfTemperature();

    return 0;
}