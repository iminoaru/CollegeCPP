/* 5. Write a function that accepts two arguments: a string name of a movie and an
integer running time in minutes. Provide a default value for the minutes so that if
you call the function without an integer argument, the minutes default to 90.
Write a main () function that proves that you can call the function with a string argument
alone as well as with a string and an integer. */

#include <iostream>
using namespace std;


void Movie(string name , int &time ){
    cout << "Movie : " << name << '\n' << "Duration :" << time;
}
void Movie(string name ){
    cout << "Movie : " << name << '\n' << "Duration : 90" ;
}


int main(){

    int time =90 ;
    string name ;
    cout << "Enter Movie Name: ";
    getline(cin, name, '\n');
    cout << "Enter Movie Time: ";
    cin >> time;

    Movie(name , time);

    return 0;
}
//cin.ignore();
