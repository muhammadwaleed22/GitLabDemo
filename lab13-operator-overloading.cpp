#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    // Constructor
    Complex(int a = 0, int b = 0) {
        r = a;
        i = b;
    }

    // Overload + operator
    Complex operator+(Complex c) {
        return Complex(r + c.r, i + c.i);
    }

    // Overload - operator
    Complex operator-(Complex c) {
        return Complex(r - c.r, i - c.i);
    }

    // Display function
    void display() {
        cout << r << " + i" << i << endl;
    }
};

int main() {
    int r1, i1, r2, i2;

    // Taking input from user
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    // Addition
    Complex sum = c1 + c2;
    cout << "Addition result: ";
    sum.display();

    // Subtraction
    Complex diff = c1 - c2;
    cout << "Subtraction result: ";
    diff.display();

    return 0;
}

