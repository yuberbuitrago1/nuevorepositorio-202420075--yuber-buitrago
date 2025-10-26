#include <iostream>

using namespace std;

bool validateLength (string userName)
{
    int lengthName = userName.size();
    return lengthName >= 6 && lengthName <= 12;

}

bool validateStartLetter(string userName)
{
    char firstCharacter = userName[0];
    return firstCharacter >= 'a' && firstCharacter <= 'z' || firstCharacter >= 'A' && firstCharacter <= 'Z';
}

bool validateWhitoutSpaces(string userName)
{
    for (int i = 0; i < userName.size(); i++)
    {
        char findSpace = userName[i];
        if (findSpace == ' ')
        {
            return false;
        }
    }
    return true;
}

void validateUsername()
{
    string userName;

    cout << "ingrese un nombre de usuario: ";
    getline (cin , userName);

    if (validateLength(userName) && validateStartLetter(userName) && validateWhitoutSpaces(userName))
    {
        cout << "nombre de usuario valido";
    }
    else 
    {
        cout << "nombre no valido, debe cumplir los siguientes condiciones: " << endl;
        if (validateLength(userName) == false)
        {
            cout << "el usuario debe tener entre 6 o 12 caracteres" << endl;
        }
        if (validateStartLetter(userName) == false)
        {
            cout << "el usuario debe comenzar con mayuscula" << endl;
        }
        if (validateWhitoutSpaces(userName) == false)
        {
            cout << "el usuario no debe tener espacios" << endl;
        }
    }
}

int main(){

    
    validateUsername();

    return 0;
}