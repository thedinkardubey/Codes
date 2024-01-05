#include <iostream>
#include <cstdlib>

class Complex
{
private:
    int real;
    int img;

public:
    void showData()
    {
        std::cout << "The value is" << real << " + " << img << "i" << std::endl;
    }
    void setValue(int a, int b)
    {
        real = a;
        img = b;
    }
    friend Complex complexAdder(Complex r, Complex i);
};

Complex complexAdder(Complex complex1, Complex complex2)
{
    Complex temp;
    temp.setValue((complex1.real + complex2.real), (complex1.img + complex2.img));
    return temp;
}

int main()
{
    system("clear");
    Complex c1, c2;
    c1.setValue(2, 3);
    c2.setValue(8, 9);
    Complex c3 = complexAdder(c1, c2);
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}