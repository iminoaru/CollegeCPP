/*2. 2. Create a class rational for performing arithmetic with fractions. Use an integer variable to represent
the private data of the class-the numerator and denominator. Provide a member function to get input from the user.
This function should also check that denominator entered is not 0, if it is zero print invalid input. Provide a
function to display the values. Overload +, -, *, / operators to add, subtract, multiply and divide the objects
of this class.  */


#include <iostream>

using namespace std;

class Rational {
private:
    int num, den;

public:
    Rational() {
        num = 0;
        den = 1;
    }

    Rational(int n, int d) {
        if (d == 0) {
            cout << "Invalid input! Denominator cannot be zero." << '\n';
            num = 0;
            den = 1;
        }
        else {
            num = n;
            den= d;
            reduce();
        }
    }

    void input() {
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> den;
        if (den == 0) {
            cout << "Invalid input! Denominator cannot be zero." << '\n';
            num = 0;
            den = 1;
        }
        else {
            reduce();
        }
    }

    void display() {
        cout << num << "/" << den;
    }

    void reduce() {
        int gcd = findGCD(num, den);
        num /= gcd;
        den /= gcd;
        if (den < 0) {
            num = -num;
            den = -den;
        }
    }

    int findGCD(int a, int b) {
        if (b == 0)
            return a;
        return findGCD(b, a % b);
    }

    Rational operator+(const Rational& r) {
        int n = num * r.den + r.num * den;
        int d = den * r.den;
        return Rational(n, d);
    }

    Rational operator-(const Rational& r) {
        int n = num * r.den - r.num * den;
        int d = den * r.den;
        return Rational(n, d);
    }

    Rational operator*(const Rational& r) {
        int n = num * r.num;
        int d = den* r.den;
        return Rational(n, d);
    }

    Rational operator/(const Rational& r) {
        int n = num * r.den;
        int d = den * r.num;
        return Rational(n, d);
    }
};

int main() {
    Rational r1, r2, r3;

    cout << "Enter values for first fraction:" << '\n';
    r1.input();
    cout << "Enter values for second fraction:" << '\n';
    r2.input();

    r3 = r1 + r2;
    cout << "Addition: ";
    r3.display();
    cout << endl;

    r3 = r1 - r2;
    cout << "Subtraction: ";
    r3.display();
    cout << endl;

    r3 = r1 * r2;
    cout << "Multiplication: ";
    r3.display();
    cout << endl;

    r3 = r1 / r2;
    cout << "Division: ";
    r3.display();
    cout << endl;

    return 0;
}
