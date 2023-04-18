#include <iostream>

using namespace std;

class MyClass {
	public:
	  MyClass() {
	    cout << "Constructor executed" << endl;
	  }
	  ~MyClass() {
	    cout << "Destructor executed" << endl;
	  }
};

int main() {
  MyClass obj;
  cout << "Meow" << endl;
  obj.~MyClass();
  cout << "Meow" << endl;
  return 0;
}
