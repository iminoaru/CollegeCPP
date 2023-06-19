/*2. A point in a two-dimensional plane having coordinate as (x,y),
can be represented by a class whose private data members are x and y.
Write the constructor and destructor functions of the class. The constructor
should initialise (x,y) by passing parameters values. Now, a rectangle can be
represented by the top-left and bottom-right vertices. Define a class say
‘Rectangle’ whose private data members are top-left and bottom-right vertices.
Write the parameterised constructor function of the class ‘Rectangle’. Also,
write the destructor function. Finally, write a program to show the order in
which different constructors and destructors are called.*/

#include<iostream>
using namespace std;

class Point{
    int x, y;

    public:
        Point(int x, int y){
            this -> x = x;
            this -> y = y;
            cout << "Point constructed" << '\n';
        }

        ~Point(){
            cout << "Point destructer" << '\n';
        }
};

class Rectangle{
    Point topLeft, bottomRight;

    public:

        Rectangle(int x1, int y1, int x2, int y2) : topLeft(x1, y1) ,  bottomRight(x2, y2){
            cout << "Rectangle constructed" << '\n';
        }

        ~Rectangle(){
            cout << "Rectangle destructer" << '\n';
        }
};

int main(){
    int a , b, c, d;

    cout << "Enter topleft coordinates:" << '\n';
    cin >> a >> b;
    cout << "Enter bottomright coordinates:" << '\n';
    cin >> c >> d;

    Rectangle r(a , b , c , d);
    return 0;
}

