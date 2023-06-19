/*1. Write a program that creates a text file “TEXT.txt”on the disk. Write text on this file.
Read this file and  display the following information on the screen in two columns:

1. Number of lines
2. Number of words
3. Number of characters

Strings should be left-justified and numbers should be right-justified in a suitable field width.
Also handle the error by displaying suitable error message. */


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;

    ofstream fout;
    fout.open("N:/OOP lab/Lab 9/TEXT.txt");
    string s = "Jaypee University\nBtech\nComputer Science Engineering";
   // char s[80] = "Jaypee University\nBtech\nComputer Science Engineering";
    fout << s;
    lineCount++;
    fout.close();

    ifstream fin;
    fin.open("N:/OOP lab/Lab 9/TEXT.txt");
    while(fin){
    wordCount++;
    fin >> s;
    }

    int len = strlen(s);
    for(int i = 0 ; i < len ; i++){
        charCount++;
    }

    cout << '\n' << wordCount << '\n' << charCount;

    return 0;
}
