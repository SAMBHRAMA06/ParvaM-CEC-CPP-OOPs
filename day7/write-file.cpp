#include<iostream>
#include<fstream>
using namespace std;

class Teacher{
    private:
        string name,branch;
        int age, experience;
    
    public:
        void setInfo(string n, string b, int a ,int e){
            name = n;
            branch = b;
            age = a;
            experience = e;
        }

        void writeOfFile(){
            ofstream write ("write.txt");
            write << " Teacher details are as follows: " << endl;
            write << " Name: " << name << endl;
            write << " Age: " << name << endl;
            write << " Branch: " << name << endl;
            write << " Experience: " << name << endl;

        }
};

int main(){
    string teacher_name, teacher_branch;
    int teacher_age, teacher_experience;

    cout << "Enter the name, age, branch and experience: ";
    cin >>  teacher_name >> teacher_branch >> teacher_age >> teacher_experience;

    Teacher t1;
    t1.setInfo(teacher_name, teacher_branch, teacher_age, teacher_experience);
    t1.writeOfFile();
}
