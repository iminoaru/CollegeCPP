/* Write a program to merge two files and write it in a new file. 
Also handle the error by displaying suitable error message.
*/

#include <iostream>
#include <fstream>
using namespace std;


int main(){
    
    ofstream bahar1("q41.txt");
    bahar1 << "Ronnie Coleman\n";
    bahar1.close();

    ofstream bahar2("q42.txt");
    bahar2 << "Arnold Schwarzenegger";
    bahar2.close();

    ifstream andar1("q41.txt");
    ifstream andar2("q42.txt");
    
    ofstream bahar("merged.txt");
    
    string console;

    while(getline(andar1, console)){
        bahar << console << '\n';
    }

    while(getline(andar2, console)){
        bahar << console << '\n';
    }

    andar1.close();
    andar2.close();
    bahar.close();

    cout << "Hogya merge.";

    return 0;
}
