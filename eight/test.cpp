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
  return 0;
}
