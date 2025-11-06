#include <iostream>

using namespace std;

void counterVocalsAndConsonants(){

    string text = "Desarrollo de Software";
    string newWord;
    int counterVocals = 0;
    int counterConsonants = 0;

        for (int i = 0; i < text.size(); i++)
    {
        char letter = text[i];
        if (letter >= 'A' && letter <= 'Z') // es mayuscula
        {
            newWord += letter + 32;
        }
        if (letter >= 'a' && letter <= 'z') // es minuscula
        {
            newWord += letter;
        }
    }

    for (int n = 0; n < newWord.size(); n++)
    {
        char character = newWord[n];
        if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        {
            counterVocals++;
        }
        else if (character != ' ' && character != 'a' || character != 'e' || character != 'i' || character != 'o' || character != 'u')
        {
            counterConsonants++;
        }
    }

    cout << "contador de vocales: " << counterVocals << endl;
    cout << "contador de consonantes: " << counterConsonants << endl;

}

int main(){

    counterVocalsAndConsonants();

    return 0;
}