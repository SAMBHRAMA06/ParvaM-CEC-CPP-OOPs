#include<iostream>
using namespace std;

int main(){
    string firstName,  college , branch;
    char sem;
    int age;

    cout<< "Enter your name:";
    cin>>firstName;
    cout<< "Enter your college name in short:";
    cin>>college;
    cout<< "Enter your branch name in short:";
    cin>>branch;
    cout<< "Enter your semester:";
    cin>>sem;
    cout<< "Enter your age:";
    cin>>age;

    cout<< "your name is:"<< firstName << "you're" << age <<"years old, you're studying in" <<college<< "college on" <<branch<< "branch in" <<sem<< "semester" ;
   
}
