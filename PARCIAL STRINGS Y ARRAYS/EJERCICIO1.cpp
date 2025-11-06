#include <iostream>

using namespace std;

void counterWordsAndTheLargest(){

    string sentence;
    int counterWords = 0;

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

    cout << "el numero de palabras es: " << counterWords << endl;
    
}

int main(){

    counterWordsAndTheLargest();

    return 0;
}