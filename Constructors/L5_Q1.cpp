/*1. Write a program to perform addition of two complex numbers using constructor overloading.
The first constructor which takes no argument is used to create objects which are not initialized,
second which takes one argument is used to initialize real and imaginary parts to equal values and
third which takes two argument is used to initialized real and imaginary to two different values.
Include sum member function that takes two objects and performs the addition of these two objects.
Write display function to display the object in complex form  i.e. 2+i6.
Write main function to test your program.*/



#include <iostream>
using namespace std;

class Complex {
  private:
    float re, im;
  public:
    Complex() {
      re = 0.0;
      im = 0.0;
    }
    Complex(float val) {
      re = val;
      im = val;
    }
    Complex(float r, float i) {
      re = r;
      im= i;
    }
    void sum(Complex c1, Complex c2) {
      re = c1.re + c2.re;
      im = c1.im + c2.im;
    }
    void display() {
      cout << re << " + i" << im << endl;
    }
};

int main() {
  Complex c1, c2(2.5), c3(3.5, 4.5), result;
  result.sum(c2, c3);
  c1.display();
  c2.display();
  c3.display();
  result.display();
  return 0;
}
