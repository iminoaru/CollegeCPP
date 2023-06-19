#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream bahar("TEXT.txt");
    bahar << "Hamare sath shree raghunath\nto kis baat ki chinta..";
    bahar.close();

    ifstream andar("TEXT.txt");
    string console;
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;

    while (getline(andar, console)) {
        lineCount++;
        charCount += console.length();

        
       bool test = false;
        for (int i = 0 ; i < console.length() ; i++){
            char c = console[i];
            if (c == ' ' || c == '\n') {
                test = false;
            } 
            else if (!test){
                test = true;
                wordCount++;
            }
        }
    }

    andar.close();

    cout << "Number of lines: " << lineCount << '\n';
    cout << "Number of words: " << wordCount << '\n';
    cout << "Number of chars: " << charCount << '\n';

    return 0;
}
