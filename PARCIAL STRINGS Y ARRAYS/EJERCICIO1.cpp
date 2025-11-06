#include <iostream>

using namespace std;

void counterWordsAndTheLargest(){

    string sentence;
    int counterWords = 1;

    cout << "ingrese una frase: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.size(); i++)
    {
        char spaces = sentence[i];
        if (spaces == ' ')
        {
            counterWords++;
        }
    }

    string newWords[counterWords];
    string longestWord = "";
    string currentWord = "";
    for (int n = 0; n < sentence.size(); n++)
    {
        char letter = sentence[n];
        if (letter != ' ')
        {
            currentWord += letter;
        }
        else if( letter == ' ' || n == sentence.size() - 1)
        {
            if (currentWord.size() >= longestWord.size())
            {
                longestWord = currentWord;
            }
            currentWord = "";
        }
    }
    

    cout << "el numero de palabras es: " << counterWords << endl;
    cout << "la palabra mas larga es: " << longestWord << endl;
    
}

int main(){

    counterWordsAndTheLargest();

    return 0;
}