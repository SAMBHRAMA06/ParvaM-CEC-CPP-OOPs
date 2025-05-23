#include<iostream>
using namespace std;

class Bank{
    private:
        int balance=0;
    public:
    //Data members of the class
        string custName, custEmail;
        int acNumber;

    void createAccount(string cName,string cEmail ){
        custName = cName;
        custEmail = cEmail;
    }

    void displayInfo(){
        cout << "Customer Name: " << custName << endl;
        cout << "Customer Email: " << custEmail << endl;

    }

    //setter
    void addBalance(int account ,int amount){
        balance += amount;
        cout << "The amount has been deposited successfully!" << endl;
    }
    //setter
    void withdrawAmount(int account ,int amount){
        balance -= amount;
        cout << "The amount has been withdrawn successfully!" << endl;

    }
    
    //getter
    void checkBalance(){
        cout << " Bank Balance: " << balance << endl;
    }

};

int main(){
    Bank cust1; //Object declared or initalised
    string name, email;
    int acnum, amount;

    //we can assign the value to the public member
    cust1.custName = "SAM";
    cust1.custEmail = "SDGR";
    cust1.acNumber = 56389;

    // cust1.balance = 5000; // we cannt assign value to private data members

    cout << "Enter Customer Name: ";
    cin >> name;
    cout << "Enter your email id: ";
    cin >> email;
    cout << "Enter your account number: ";
    cin >> acnum;
    cout << "Enter your maount to be deposited: ";
    cin >> amount;
    
    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(acnum, amount);
    cust1.checkBalance();

    cout << "Enter the amount to be withdrawn: "<< endl;
    cin >> amount;
    cust1.withdrawAmount(acnum, amount);
    cust1.checkBalance();

}

