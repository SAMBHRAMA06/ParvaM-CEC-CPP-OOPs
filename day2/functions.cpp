#include<iostream>
using namespace std;

void sayHello(){   //function decleration
    cout << "Hello! "; // function defenition
}

int sayHi(string name){ //function with parameters
    cout<< "hi, " << name <<endl;
}

int greet(string fname,string lname,int age){
    cout<< "hi, " << fname << " " <<lname <<  ",Age:" << age <<endl;
}

int main(){
    string firstName,lastName,friendName;
    int age;
    cout<< "Enter your first Name:";
    cin>>firstName;
    cout<< "Enter your last Name:";
    cin>>lastName;
    cout<< "Enter your Age:";
    cin>>age;
    cout<<"Enter your friend Name:";
    cin>>friendName;
    sayHello(); //function call
    sayHi(firstName); //function call with arguments
    sayHi(friendName);
    greet(firstName, lastName, age);
}