#include <iostream>

using namespace std;

//contador de vocales, consonantes y simbolos

int counterVocals(string chain){

    int counter = 0;
    string newWord;
    for (int i = 0; i < chain.size(); i++)
    {
        char letter = chain[i];
        if (letter >= 'A' && letter <= 'Z') // es mayuscula
        {
            newWord += letter + 32;
        }
        if (letter >= 'a' && letter <= 'z') // es minuscula
        {
            newWord += letter;
        }
    }
    
    

    for (int j = 0; j < newWord.size(); j++)
    {
        char vocals = newWord[j];

        if(vocals == 'a' || vocals == 'e' || vocals == 'i' || vocals == 'o' || vocals == 'u') 
        {
            counter ++;
        }
    }
    

    return counter;
}

int counterConsonants(string chain){

    int counter = 0;
    string newWord;
    for (int i = 0; i < chain.size(); i++)
    {
        char letter = chain[i];
        if (letter >= 'A' && letter <= 'Z') // es mayuscula para volver minuscula 
        {
            newWord += letter + 32;
        }
        if (letter >= 'a' && letter <= 'z') // es minuscula
        {
            newWord += letter;
        }
    }

    for (int j = 0; j < newWord.size(); j++)
    {
        if ((newWord[j] >= 'a' && newWord[j] <= 'z') && (newWord[j] != 'a' || newWord[j] != 'e' || newWord[j] != 'i' || newWord[j] != 'o' || newWord[j] != 'u'))
        {
            counter ++;
        }
        
    }
    return counter;
}

int counterAnalfabetics(string chain){
    int counter = 0;
    string newWord;
    for (int i = 0; i < chain.size(); i++)
    {
        char letter = chain[i];
        if (letter >= 'A' && letter <= 'Z') // es mayuscula para volver minuscula 
        {
            newWord += letter + 32;
        }
        if (letter >= 'a' && letter <= 'z') // es minuscula
        {
            newWord += letter;
        }
    }

    for (int j = 0; j < newWord.size(); j++)
    {
        if (newWord[j] < 'a' || newWord[j] > 'z' )
        {
            counter ++;
        }
    }
    

    return counter;

}

void counterCharacters(){

    string chain;

    cout << "ingrese una cadena de texto: ";
    getline(cin, chain);

    cout << "numero de vocales: " << counterVocals(chain) << endl;
    cout << "numero de consonantes: " << counterConsonants(chain) << endl;
    cout << "numero de caracteres diferentes a letras: " << counterAnalfabetics(chain) << endl;
}

int main()
{

    counterCharacters();

    return 0;
}