#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    ofstream bahar("input.txt");
    bahar << "Lord Rama";
    bahar.close();

    ifstream andar("input.txt");
    //encoding
    ofstream encryptor("encrypted.txt");

    char ch;
    while(andar.get(ch)){
        ch += 6;  
        encryptor.put(ch);
    }

    andar.close();
    encryptor.close();
    cout << "Hogya encrypt" << '\n';

    //decoding
    ifstream encryptedFile("encrypted.txt");

    ofstream decryptor("decrypted.txt");

    while(encryptedFile.get(ch)){
        ch -= 6;  
        decryptor.put(ch);
    }

    encryptedFile.close();
    decryptor.close();
    cout << "Hogya decrypt" << '\n';

    return 0;
}
