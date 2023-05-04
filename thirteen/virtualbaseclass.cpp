#include <iostream>

using namespace std;

class Animal {
  protected:
    string name;
  public:
    Animal(const string &_name): name(_name) {}
    virtual void makeSound() {
      cout << "Animal Sound" << endl;
    }
};

class Mammal: public virtual Animal {
  public:
    Mammal(const string &_name): Animal(_name) {}
    void makeSound() {
      cout << "Mammal Sound" << endl;
    }
};

class Bird: public virtual Animal {
  public:
    Bird(const string &_name): Animal(_name) {}
    void makeSound() {
      cout << "Bird Sound" << endl;
    }
};

class Bat: public Mammal, public Bird {
  public:
    Bat(const string &_name): Animal(_name), Mammal(_name), Bird(_name) {}
    void makeSound() {
      cout << "Bat Sound" << endl;
    }
};

int main() {
  Bat b("Flying Fox");
  b.makeSound();
  b.Mammal:: makeSound();
  b.Bird:: makeSound();
}