/* Write a program to copy a file in another name. 
Also handle the error by displaying suitable error message.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream bahar("q3.txt");
    bahar << "Rocky Balboa\nAppolo Creed";
    bahar.close();
   
    ifstream andar("q3.txt");
    ofstream copyWalaBahar("copyofq3.txt");
    
    string console;
    while(getline(andar, console)){
        copyWalaBahar << console << '\n';
    }

    copyWalaBahar.close();
    andar.close();
    
    cout << "hogya Copy.";
    return 0;
}
