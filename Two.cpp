#include <iostream>

using namespace std;

class Num
{
    public:
        int val;
        Num(int v)
        {
            val = v;
        }
        Num operator +(const Num obj)
        {
            return Num(val + obj.val);
        }
};

int main()
{
    Num a(3);
    Num b(4);
    Num c = a + b;
    cout << c.val << endl;
}