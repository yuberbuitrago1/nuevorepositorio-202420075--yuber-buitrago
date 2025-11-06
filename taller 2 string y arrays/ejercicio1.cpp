#include <iostream>

using namespace std;

void counterCharacterOfAText(){

    string Word = "programacion en c++";
    int counterWhitSpaces = Word.size();
    int counterWhitoutSpaces = 0;


    for (int n = 0; n < Word.size(); n++)
    {
        char character = Word[n];
        if (character != ' ')
        {
            counterWhitoutSpaces++;
        }
    }
    
    cout << "caracteres total: " << counterWhitSpaces << endl;
    cout << "caracteres sin espacios: " << counterWhitoutSpaces << endl;

}

int main(){

    counterCharacterOfAText();

    return 0;
}