#include<iostream>
using namespace std;

//Syntax
//class class_name //Class Declaration
class Student{
    public:
        string name, college, branch; //Data
        int sem;

    void show(){
        cout<< "Name: " << name <<endl; 
        cout<< "College: " << college <<endl; 
        cout<< "Branch: " << branch <<endl; 
        cout<< "Semester: " << sem <<endl; 
    }
};

int main(){
    Student student1; //Object creation
    student1.name ="SAMBHRAMA";
    student1.college = "CEC";
    student1.branch ="AIML";
    student1.sem = 2;

    student1.show();
    
    Student student2; //Object creation
    student2.name ="sam";
    student2.college = "CEC";
    student2.branch ="AIML";
    student2.sem = 3;

    student2.show(); //Function call
}