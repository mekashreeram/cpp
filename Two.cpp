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

// using friend function

// class Complex
// {
//     public:
//         int real, img;
//         Complex(int r, int i)
//         {
//             real = r;
//             img = i;
//         }
//         friend Complex operator +(Complex, Complex);
//         void printNum()
//         {
//             cout << real << " + i" << "(" << img << ")";
//         }
// };

// Complex operator +(Complex c1, Complex c2)
// {
//     return Complex(c1.real + c2.real, c1.img + c2.img);
// }

int main()
{
    Complex a(3, 4);
    Complex b(14, -12);
    Complex c = a + b;
    c.printNum();
    cout << endl;
}