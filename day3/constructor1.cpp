#include<iostream>
using namespace std;
//Constructor is a special member function of a class which is automatically called when an object of the class is created.
class Customer{
    public:
        string firstName, lastName;
        int age, rating;
    
        //Initailsed the Constructor
        Customer(){ //Parameterized constructor
            firstName = "John";
            lastName = "Doe";
            age = 10;
            rating = 5;
        }

        void showRating(){
            cout << "Customer Name: " << firstName << " " << lastName << endl;
            cout << "Customer Age: " << age << endl;
        }

        void giveRating(int rate);

        void showRating(int rate){
            cout << "You've given " << rate << " stars rating. Thank you!" << endl;
        }
};  

//Scope resolution operator
void Customer :: giveRating(int rate){ // Defined the member function
    rating = rate;
}

int main(){
    Customer cust1; //Invokes the constructor to assign the default values
    cust1.showRating(); //Function call
    cust1.giveRating(4); //Function call

    Customer cust2; //Invokes the constructor to assign the default values
    cust2.firstName = "Jane";   
    cust2.lastName = "Smith";
    cust2.age = 25;
    
    int starRating;

    cout << "Give your rating (0 to 5): ";
    cin >> starRating; //Input the rating
    cust2.giveRating(starRating); //Function call
    cust2.showRating(); //Function call
    
}