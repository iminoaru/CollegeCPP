/*2. Define a class to represent a bank account, including the following data members:
    Name of the depositor
    Account number
    Type of account
    Balance amount in the account

And member functions:

    To assign initial values
    To deposit an amount
    To withdraw an amount after checking the balance
    To display the name and balance

Write a main program to test the program.*/

#include <bits/stdc++.h>

using namespace std;

class Bank {

        string name;
        long long int AccNo;
        string BankType;
        int balance;

    public:

        void assignval();
        void deposit();
        void withdraw();
        void display();

};

// initial input operation
void Bank :: assignval(){
    cout << "Enter your Name : " ;
    //cin.ignore();
    getline(cin , name , '\n');

    cout << "Enter Account No. : " ;
    cin >> AccNo;

    cout << "Enter Account Type : " ;
    cin.ignore();
    getline(cin , BankType , '\n');

    cout << "Enter initial amount : " ;
    cin >> balance;
}

// depositing operation
void Bank :: deposit(){
    int added;
    cout << "Enter amount : " ;
    cin >> added;
    balance = balance + added;
}

// withdrawing operation
void Bank :: withdraw(){
    int taken;
    cout << "Enter amount to withdraw : " ;
    cin >> taken;

    if(taken > balance){
        cout << "Not enough Balance in account, current balance : " << balance;
        cout << "Enter amount to withdraw : " ;
        cin >> taken;
    }
    balance = balance - taken;
}

// info display operation
void Bank :: display(){

    cout << "Customer name : " << name << '\n';
    cout << "Current Amount : " << balance;

}

int main(){

    Bank ob;

    ob.assignval();

    int choice;

    cout << "Enter the desired choice: " << '\n' ;
    cout << "Press 1 for deposit" << '\n';
    cout << "Press 2 for withdraw" << '\n';
    cin >> choice;

    if(choice == 1) ob.deposit();
    else if(choice == 2) ob.withdraw();
    else cout << "Invalid choice.." << '\n';

    ob.display();

return 0 ;

}

