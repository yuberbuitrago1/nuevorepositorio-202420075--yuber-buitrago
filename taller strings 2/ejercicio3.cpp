#include <iostream>

using namespace std;

int counterScripts(string codeProduct){

    int counter = 0;

    for (int i = 0; i < codeProduct.size(); i++ )
    {
        char script = codeProduct[i];
        if (script == '-')
        {
            counter ++;
        }
    }

    return counter;
}

int counterNumbers(string codeProduct){

    int counter = 0;

    for (int i = 0; i < codeProduct.size(); i++)
    {
        char number = codeProduct[i];
        if (number >= '0' && number <= '9')
        {
            counter ++;
        }
    }

    return counter;
}

bool verifyLastMayor(string codeProduct){

    char lastLetter;

    for (int i = 0; i < codeProduct.size(); i++)
    {
        lastLetter = codeProduct[i];
    }
    return ( lastLetter >= 'A' && lastLetter <= 'Z');
}

void analisisCodeProduct(){

    string codeProduct;

    cout << "ingrese el codigo dell producto: ";
    getline(cin, codeProduct);

    cout << "numero de scripts(-): " << counterScripts(codeProduct) << endl;
    cout << "cantidad de digitos: " << counterNumbers(codeProduct) << endl;

    if (verifyLastMayor(codeProduct) == true)
    {
        cout << "el codigo si termina con una letra mayuscula" << endl;
    }
    else if (verifyLastMayor(codeProduct) == false)
    {
        cout << "el codigo no tiene una letra mayuscula al final " << endl;
    }

}

int main(){

    analisisCodeProduct();

    return 0;
}