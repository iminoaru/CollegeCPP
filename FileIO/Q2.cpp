/*Write a program to read the file and store the lines into an array. 
Also handle the error by displaying suitable error message.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream bahar("q2.txt");
    bahar << "New Day\nNew Ws";
    bahar.close();

    ifstream andar("q2.txt");
    string lines[50];
    int numLines = 0;
    string console;
    
    while(getline(andar, console)){
        if(numLines < 50) {
            lines[numLines] = console;
            numLines++;
        } 
        else{
            cout << "Warning: only 50 lines can be read at once";
            break;
        }
    }

    for (int i = 0 ; i < numLines ; i++) {
        cout << lines[i] << '\n';
    }
    
    andar.close();
    
    return 0;
}
