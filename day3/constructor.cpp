#include<iostream>
using namespace std;

//constrcutor name will be same as class name
// there is no return type for constructor
//constructor is automatically called when object is created
//constructor wont return any values
//we have three types of constructors
//1. Default constructor
//2. Parameterized constructor
//3. Copy constructor
//constructor is used to define the value to the object

class Calculate{
    public:
        //Member data
        int num1, num2;
        float res;

        //Declare the constructor
        //Ctrl + ?:Comment
        // num1 = 5;
        // num2 = 10;
        Calculate(){ //Default constructor
            num1 = 5;
            num2 = 10;
            
        }

        //Member function
        void showOutput(){
            cout << "Addition: " << num1 + num2 << endl;
            cout << "Subtraction: " << num1 - num2 << endl;
            cout << "Multiplication: " << num1 * num2 << endl;
            cout << "Quotient: " << num1 / num2 << endl;
            cout << "Remainder: " << num1 % num2 << endl;
        }
};

int main(){
    //Inialising the default value using Constructore automatically when ogject is declared
    Calculate c1; //Object 

    //Assigning the value to the data members
    Calculate c2;
    c2.num1 = 25;       
    c2.num2 = 30; 
    c1.showOutput(); //Function call
    c2.showOutput(); //Function call
}