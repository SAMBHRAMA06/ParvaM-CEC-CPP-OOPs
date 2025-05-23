#include<iostream>
using namespace std;

class Company{
    private:
        string cin;
        int totalWorth;

    public:
        string gstNum, location;
        int numOfEmp;

        //setter method
    void setDetails(string cinNum, int worth){
        cin = cinNum;
        totalWorth = worth;
    }

    //getter method
    void getDetails(string gstNumber){
        cout << "Corporate Identification Number: " << cin << endl;
        cout << "Total Worth Of the Company: " << totalWorth << endl;
    }

    void getBasicDetails(); //Declare the member function
};

//Function Deinition outside the class
//Syntax :return_type class_Name :: member_function_name
void Company :: getBasicDetails(){ //Scope resolution operator
    cout << "GST Number: " << gstNum << endl;
    cout << "Location: " << location << endl;
    cout << "Number of Employees: " << numOfEmp << endl;
}

int main(){
    Company comp1; //Object created for the class Company
    comp1.gstNum = "1234567890";
    comp1.location = "Pune";
    comp1.numOfEmp = 1000;
    comp1.getBasicDetails(); //Function call   

    string cinNumber;
    int companyWorth;

    cinNumber = "1234567890"; //Initialise the value of cinNumber variable
    companyWorth = 500000; //Initialise the value of companyWorth variable

    comp1.setDetails(cinNumber, companyWorth); //Function call
    comp1.getDetails(comp1.gstNum); //Function call

    cout << "Company GST Number: " << comp1.gstNum << endl;
    cin >> comp1.gstNum;
    cout << "Company Location: " << comp1.location << endl;
    cin >> comp1.location;
    cout << "Number of Employees: " << comp1.numOfEmp << endl;
    cin >> comp1.numOfEmp;

    comp1.getBasicDetails(); //Function call
    comp1.getDetails(comp1.gstNum); //Function call
    comp1.setDetails(cinNumber, companyWorth); //Function call
    
}