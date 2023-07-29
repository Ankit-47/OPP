#include <iostream>

using namespace std;

class complex {
protected:
    int real;
    int img;

public:
    complex() {}
    complex(int real, int img) {
        this->real = real;
        this->img = img;
    }

    void display() {
        cout << real <<"+" << img << "i" << endl;
    }

    complex operator+(complex c2) {
        complex c3;
        c3.real = real + c2.real;
        c3.img = img + c2.img;
        return c3;
    }

    complex operator-(complex c2) {
        complex c3;
        c3.real = real - c2.real;
        c3.img = img - c2.img;
        return c3;
    }

    complex operator*(complex c2) {
        complex c3;
        c3.real = real * c2.real - img * c2.img;
        c3.img = real * c2.img + img * c2.real;
        return c3;
    }
};

int main() {
    complex c1(2, 3), c2(5, 9), c3;
    c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.display();

    c3 = c1 - c2;
    cout << "c1 - c2 = ";
    c3.display();

    c3 = c1 * c2;
    cout << "c1 * c2 = ";
    c3.display();

    return 0;
}
