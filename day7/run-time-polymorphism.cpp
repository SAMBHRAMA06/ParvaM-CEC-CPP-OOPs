#include<iostream>
using namespace std;

class Base {
    public:
        void showBase(){
            cout << "Base member function has been called!" << endl;
        }
};

class Derived : public Base {
    public:
        void showBase(){  //Function overriding
            cout << "Derived member function has been called!" << endl;
            // syntax :base-class-name :: member function
            Base :: showBase(); // Calling the member of Base class using Scope Resolution Operator
        }
};

//Example2:

class Animal{
    public:
        void makeSound(){
            cout << " Animal makes some sound! " << endl;
        }
};

class Dog : public Animal{
    public:
        void makeSound(){
            Animal :: makeSound();
            cout << " Dog Barks! " << endl;
        }
};

class Cat : public Animal{
    public:
        void makeSound(){
            Animal :: makeSound(); //calling the animal class -member function
            cout << " Cat meows! " << endl;
        }
};

int main(){
    // Base b1;
    // b1.showBase();

    Derived d1;
    d1.showBase();

    Dog dog1;
    dog1.makeSound();

    Cat cat1;
    cat1.makeSound();
}