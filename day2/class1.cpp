#include<iostream>
using namespace std;

class Car{
    //Data
    public:
        string brand, model, varient, fuel_type;
        int year;
        float price;

    //Member function
    void start(){
        cout << model << "started!" <<endl;

    }
    void park(){
        cout<< model << "parked!" <<endl;
    }

    void stop(){
        cout<< model << "stopped!" <<endl;
    }

    void display(){
        cout << "Brand: " << brand <<endl;
        cout << "Model: " << model <<endl;
        cout << "Varient: " << varient <<endl;
        cout << "Fuel Type: " << fuel_type <<endl;
        cout << "Launch Year: " << year <<endl;
        cout << "Price: " << price <<endl;
    }
    
};

int main(){
    Car c1; //Object created for hte class Car
    c1.brand ="Toyota";
    c1.model =" Innova";
    c1.varient = " 6 Seater";
    c1.fuel_type = "Diesel";
    c1.year = 2024;
    c1.price = 15,00,000;
    c1.start();
    c1.park();
    c1.stop();
    
    Car c2; //Object created for hte class Car
    c2.brand ="Toyota";
    c2.model =" Innova";
    c2.varient = " 6 Seater";
    c2.fuel_type = "Diesel";
    c2.year = 2024;
    c2.price = 15,00,000;
    c2.start();
    c2.park();
    c2.stop();
    
}