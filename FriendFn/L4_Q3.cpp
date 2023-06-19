/*3. Create two classes DM and DB which store the value of the distances.
DM stores distances in meters and centimeters and DB in feet and inches.
Write a program that can read values for the class objects and add one
object of DM with another object of DB. Use a friend function to carry
out the addition operation. The object that stores the results may be a
DM object or DB object, depending on the units in which the results are
required. The display should be in the format of feet and inches or
meters and centimeters depending on the object on display.*/

#include<iostream>
using namespace std;

class DM;
class DB{
    int feet, inch;
public:
    void getdata(){
        cout << "Enter distance in feet and inches:" << endl;
        cin >> feet >> inch;
    }

    friend void add(DB, DM);
};

class DM {
    int meter, centi;
public:
    void getdata(){
        cout << "Enter distance in meters and centimeters:" << endl;
        cin >> meter >> centi;
    }

    friend void add(DB, DM);
};

void add(DB d, DM m){

    int rmeter = 0, rcenti = 0, rfeet = 0, rinch = 0;

    rcenti = m.centi + (d.inch * 2.54);
    rmeter = m.meter + (d.feet * 0.3048);


    if (rcenti >= 100){
        rmeter += (rcenti / 100);
        rcenti = rcenti % 100;
    }


    if (rinch >= 12){
        rfeet += (rinch / 12);
        rinch = rinch % 12;
    }


    if (rmeter > 0)
        cout << "Result is: " << rmeter << " meters " << rcenti << " centimeters" << endl;
    else
        cout << "Result is: " << rfeet << " feet " << rinch << " inches" << endl;
}

int main(){
    DM d1;
    DB b1;


    d1.getdata();
    b1.getdata();

    //displaying the ans in m and cm.
    add(b1, d1);

    return 0;
}
