#include <iostream>

using namespace std;

class Complex
{
    public:
        int real, img;
        Complex(int r, int i)
        {
            real = r;
            img = i;
        }
        Complex operator +(const Complex obj)
        {
            return Complex(real + obj.real, img + obj.img);
        }
        void printNum()
        {
            cout << real << " + i" << "(" << img << ")";
        }
};

int main()
{
    Complex a(3, 4);
    Complex b(14, -12);
    Complex c = a + b;
    c.printNum();
    cout << endl;
}