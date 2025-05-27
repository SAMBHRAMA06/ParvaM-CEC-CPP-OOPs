#include<iostream>
using namespace std;

class Parent{ //Base class
    private:
        int net_worth = 0;
    public:
        string family_Name , family_head;
        int number_of_members;

        void setData(int worth, string familyName, string familyHead, int members_count) {
            net_worth = worth;
            family_Name = familyName;
            family_head = familyHead;
            number_of_members = members_count;
        }

        int showNetWorth() { //setter
            return net_worth;
        }
        
        int getFamilyInfo() { //getter
            cout << " I'm from " << family_Name 
                    << " family, and my family head is: " << family_head << ". Our Family's Net Worth is about: " 
                    << showNetWorth() << endl;
        }
};

//syntax for declaring the dervied class:
//class derived-class-name :accessiblity -mode base class-name

class Child : public Parent { //Derived class
    public:
        string member_name;
        int age;

        void addDetails(string name, int person_age) { // member function to add details
            member_name = name;
            age = person_age;
        }

        void getFamilyDetails() { //member function to get family details
            cout << "My name is: " << member_name << " and I'm: " << age << " years old.";
            getFamilyInfo();// inheriting the properties of the base class
        }
};

int main() {
    string fName, fHead, childName;
    int childAge, fworth, fMembers;

    cout << "Enter your family name, family head, net worth, and number of members in the family: ";
    cin >> fName>> fHead >> fworth >> fMembers;

    Parent p1;
    p1.setData(fworth, fName, fHead, fMembers);

    cout << "Enter your name and age: ";
    cin >> childName >> childAge;

    Child c1;
    c1.setData(fworth, fName, fHead, fMembers);
    c1.addDetails(childName, childAge);
    c1.getFamilyDetails();

}