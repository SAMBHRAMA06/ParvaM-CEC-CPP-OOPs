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
            this->salary = salary; 
        }

        void showDetails(){
            cout << "Employee ID: " << employeeID << endl;
            cout << "Employee Name: " << EmployeeName << endl;
            cout << "Experience: " << experience << " years" << endl;
            cout << "Salary: Rs " << salary << endl;
        }
};

class Skill : public Employee{
    private:
        int skillCount;
        string skills[10];

    public:


        Skill() {} //Default Constructire without initlaising any vlaues
        Skill(int count){  // Parameterised Construcutor
            skillCount = count;
            skills = new string[skillCount];
            cout << " Enter the " << count << " technologies you're familiar with: " << endl;
            for(int i = 0; i < count; i++){
                cout << "Skill " << i + 1 << ": ";
                cin >> skills[i];
            }
        }

        void showSkills(){
            cout << "Skills known: " << endl;
            for(int i = 0; i < skillCount; i++){
                cout << " - " << skills[i] << endl;
            }
            
        }

        ~skills(){
            delet[] skills; //Free up the meoty allocated by Pointer Array using delete keyword
            cout<< "Memory has been cleared by the Destructor! ";
        }
};

int main(){
    string emp_name, emp_id;
    int emp_exp, skill_Count;
    float emp_salary;

    cout << "Enter the following details of the Employee: " << endl;
    cout << "Name: ";
    cin >> emp_name;
    cout << "ID: ";
    cin >> emp_id;
    cout << "Experience (in years): ";
    cin >> emp_exp;
    cout << "Salary: ";
    cin >> emp_salary;

    cout << "Enter the number of technologies you know: " << endl;
    cin >> skill_Count;

    //Pointer reffereing to the object s of Skill class which can also inherit the properites of Employee class
    Skill s1(skill_Count);
    Skill *emp1 = &s1; // Pointer to Skill object
    s1.addDetails(emp_id, emp_name, emp_exp, emp_salary);

    
    emp1->showDetails();
    emp1->showSkills();
}