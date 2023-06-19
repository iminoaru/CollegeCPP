/*1. Design a class Distance that includes following data members: feet, inches. It has the following member function:-
Constructor, that initializes the distance to 0,0 by default.
Parameterized Constructor that initializes the distance with some values;
give a check so that the inches part is always less than 12.0.
Display function
Overloaded – operator to subtract 2 distances
Overloaded + operator to add 2 distances
Overload += and -= operator
Overload > and < operators to compare two distances*/

#include <iostream>
using namespace std;
class Distance {
    int feet;   int inch;
public:
    Distance() : feet(0), inch(0) {};           
    Distance(int f, int i) : feet(f) {
        feet = feet + i/ 12;
        inch = i % 12;                           
    };

    void getdata(int f, int i) {
        feet = f + i / 12;
        inch = i % 12;
    };


    void show() {
        cout << feet << " f  " << inch << " i" << endl;
    };

    Distance& operator+=(const Distance& r) {
        feet += r.feet;
        inch += r.inch;
        feet = feet + inch / 12;
        inch = inch % 12;
        return *this;
    };


    friend bool operator<(const Distance& l, const Distance& r) {
        return l.feet * 12 + l.inch < r.feet * 12 + r.inch;
    };
};

int main()
{
    Distance dist1;
    Distance dist2(12, 55);
    cout << "dist1 = ";  dist1.show();
    cout << "dist2 = "; dist2.show();
    
    dist1.getdata(11,23);
    dist2 += Distance(1, 0);
    if (dist1 < dist2) {
        cout << "Distance dist1 is less than dist2." << endl;
    }
    else {
        cout << "Distance dist1 not less than dist2." << endl;
    }

    dist2.show();
    return 0;
}
