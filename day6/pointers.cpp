#include<iostream>
using namespace std;

int main(){
    int a;
    // syntax for declaring the pointer:
    // datatype *pointer_name
    // datatpye of pointer shoud lbe same as refrence variable
    // Assign the address to the pointer: &variable_name
    // * refers to the poineter variable 
    // & refers ot the address of the variable 
    // ptr refers tot the address of the pointer  
    // *ptr referes to the value of the pointer
    int *ptr = &a;

    float decimal;
    float *f = &decimal;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter any decimal value: ";
    cin >> decimal;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of Pointer(ptr): " << *ptr << endl;
    cout << "Address of Pointer(ptr): " << &ptr << endl;
    cout << "Value pointed by Pointer(ptr): " << *ptr << endl;

    cout << "Value of decimal: " << decimal << endl;
    cout << "Address of decimal: " << &decimal << endl;
    cout << "Value of Pointer(f): " << *f << endl;
    cout << "Address of Pointer(f): " << &f << endl;
    cout << "Value pointed by Pointer(f): " << *f << endl;
}