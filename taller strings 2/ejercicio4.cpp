#include <iostream>

using namespace std;

int counterWords(string chainWords){

    getline (cin, chainWords);
    

    int counter = 1;

    for (int i = 0; i < chainWords.size(); i++)
    {
        char space = chainWords[i];

        if (chainWords[i] == ' ')
        {
            counter++;
        }
    }
    return counter;
}

int counterPuntuation(string chainWords){

    int counter = 0;

    for (int i = 0; i < chainWords.size(); i++)
    {
        char letter = chainWords[i];

        if (letter == '.' || letter == ',' || letter == ';' || letter == ':' || letter == '?' || letter == '!' || letter == '(' || letter == ')' || letter == '[' || letter == ']' || letter == '{' || letter == '}' || letter == '"' || letter == '.' || letter == ',' || letter == ';' || letter == ':')
        {
         counter++; 
        }
    }
    
    return counter;
}

bool verifyLastMayor(string chainWords){

    char lastLetter;

    for (int i = 0; i < chainWords.size(); i++)
    {
        lastLetter = chainWords[i];
    }
    return ( lastLetter == '.');
}

void sentenceEvaliacion(){

    string chainWords;

    cout << "ingrese una frase: ";
    getline(cin, chainWords);

    cout << "la frase tiene " << counterWords(chainWords) << " palabras" << endl;
    cout << "la frase tiene " << counterPuntuation(chainWords) << " signos de puntuacion" << endl;

    if (verifyLastMayor(chainWords) == true)
    {
        cout << "la rfase termina con punto" << endl;
    }
    else if (verifyLastMayor(chainWords) == false)
    {
        cout << "la frase no termina cn punto" << endl;
    }

}

int main(){

    sentenceEvaliacion();

    return 0;
}