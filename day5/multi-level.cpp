#include<iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;

    public:
        void setPersonDetails(string n, int a){
        name = n;
        age = a;
    }

        void showPersonDetails(){
            cout << " My name is " << name << " , and I'm " << age << " years old. " << endl;
    }
};

class Employee : public Person{ //Person -> Employee
    private:
        string company_name, emp_id;
    
    public:
        void setEmployeeDetails(string compname, string empId){
            company_name = compname;
            emp_id = empId;
        }

        void showEmployeeDetails(){
            cout << " I working in " << company_name << " , My employee ID is " << emp_id << "." << endl;
        }

};

class Developer : public Employee{ //Person -> Employee -> Developer
    private:
        string deptName;
        int experience;

    public:
        void setDeveloperDetails(string dept, int exp){
            deptName = dept;
            experience = exp;
        }

        void showDeveloperDetails(){
            cout << "I'll be working in " << deptName << " department. I've " << experience << " years of experience. " << endl;
        }

};

int main(){
    string personName, companyName, dept_Name, employee_id;
    int personAge, devExperience;

    cout << "Enter y
    our Name & Age :";
    cin >> personName >> personAge;

    cout << " Enter your Company name & employee ID: ";
    cin >> companyName >> employee_id;

    cout << " Enter your Department Name & Years of Experience: ";
    cin >> dept_Name >> devExperience;

    Developer dev1; //Object of derived class
    //dept1.deptName -cannot access the private member out of the class (developer)
    //dept1.Name -cannot access the private member out of the class(Employee)
    //dept1.companyName -cannot access the private member out of the class (person)

    dev1.setPersonDetails(personName, personAge); //Calling base class function

    dev1.setEmployeeDetails(companyName, employee_id); //Calling derived class function

    dev1.setDeveloperDetails(dept_Name, devExperience); 

    dev1.showPersonDetails(); 
    dev1.showEmployeeDetails(); 
    dev1.showDeveloperDetails();
}