#include<iostream>
using namespace std;

class Employee{
    private:
        string EmployeeName, employeeID;
        int experience;
        float salary;

    public:
        void addDetails(string id, string name, int exp, float salary){
            employeeID = id;
            EmployeeName = name;
            experience = exp;
            this->salary = salary; // Using 'this' to refer to the current object's member variable
        }

        void showDetails(){
            cout << "Employee ID: " << employeeID << endl;
            cout << "Employee Name: " << EmployeeName << endl;
            cout << "Experience: " << experience << " years" << endl;
            cout << "Salary: Rs " << salary << endl;
        }
};

int main() {
    string eName, empId;
    int empExp;
    float empSalary;

    cout << "Enter Employee ID: ";
    cin >> empId;
    cout << "Enter Employee Name: ";
    cin >> eName;
    cout << "Enter Employee Experience (in years): ";
    cin >> empExp;
    cout << "Enter Employee Salary: ";
    cin >> empSalary;

    Employee emp1; // Dynamically allocating memory for Employee object
    Employee *empPtr = &emp1; // Pointer is refering to the object emp1

    // Using pointer we are assigning the value to the object using pointer dereferencing and dot operator
    (*empPtr).addDetails(empId, eName, empExp, empSalary);
    (*empPtr).showDetails();
    
    // Using pointer we are assigning the value to the object using pointer dereferencing and arrow operator
    empPtr->addDetails(empId, eName, empExp, empSalary);
    empPtr->showDetails();

    // Dynamically allocating memory for Employee object using new operator
    //syntax:classNmae *pointer_new =new className;
    Employee *ptrEmp = new Employee; 
    ptrEmp->addDetails(empId, eName, empExp, empSalary); // Using arrow operator to call method
    ptrEmp->showDetails(); // Using arrow operator to call method
    // emp1.addDetails <==> (*empPtr).addDetails <==> empPtr->addDetails;
}