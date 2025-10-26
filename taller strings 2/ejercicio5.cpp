#include <iostream>

using namespace std;

bool verifyHasNumber(string accessCode){

    for (int i = 0; i < accessCode.size(); i++)
    {
        char number = accessCode[i];
        if (number >= '0' && number <= '9')
        {
            return true;
        }
    }
}

bool haveSpecialSimbol(string accessCode){

    for (int i = 0; i < accessCode.size(); i++)
    {
        char specialSimbol = accessCode[i];
        if (specialSimbol == '@' || specialSimbol == '#' || specialSimbol == '%' || specialSimbol == '&')
        {
            return true;
        }
    }

}

bool withoutSpaces(string accessCode){

    for (int i = 0; i < accessCode.size(); i++)
    {
        char spaces = accessCode[i];
        if (spaces == ' ')
        {
            return true;
        }
    }
}

void acccessCodeValidation(){

    string accessCode;

    cout << "escriba el codigo de acceso: ";
    getline(cin, accessCode);

    //primera condicion
    if (verifyHasNumber(accessCode) == true)
    {
        cout << "correcto, el codigo tiene almenos un digito" << endl;
    }
    else if (verifyHasNumber(accessCode) == false)
    {
        cout << "error, el codigo debe tener almenos un digito" << endl;
    }

    //segunda condicion
    if (haveSpecialSimbol(accessCode) == true)
    {
        cout << "correcto el codigo tiene simbolos especiales " << endl;
    }
    else if (haveSpecialSimbol(accessCode) == false)
    {
        cout << "error, el codigo no tiene simbolos especiales como:  (@, #, $, %) " << endl;
    }

    // tercera condicion
    if (withoutSpaces(accessCode) == false)
    {
        cout << "correcto el codigo no tiene espacios " << endl;
    }
    else if (withoutSpaces(accessCode) == true)
    {
        cout << "error, el codigo no debe tener espacios " << endl;
    }
}

int main(){

    acccessCodeValidation();

    return 0;
}