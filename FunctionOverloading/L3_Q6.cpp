/*6. Create a class rectangle with attributes length and width.
Provide member functions that calculate the perimeter and area of the rectangle.
Provide member functions to get the values from users and display the values of
member variables. Write a program to test the class. */

#include <iostream>
using namespace std;

class Rectangle{
    private:
            int length , width;
    public:
            void inputs();
            void area();
            void perimeter();
    };

void Rectangle::inputs(){
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Width: ";
    cin >> width;
    }

void Rectangle::area(){
    cout << "Area of Rectangle is: " << length * width << '\n';
    }

void Rectangle::perimeter(){
    cout << "Perimeter of Rectangle is: " << 2*(length + width);
    }

int main(){
    Rectangle TestObject;

    TestObject.inputs();
    TestObject.area();
    TestObject.perimeter();

return 0;
}


