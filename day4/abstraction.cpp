#include <iostream>
using namespace std;

class Bike{
    public:
    string brand, model ,engine_type;
    int year,price;
    
    void injectFuel(){
        cout<<"Ignite the fuel -petrol!";
    }

    void igniteFuel(){
        cout << "Ignite the fuel" << endl;
    }

    void start(string bikekModel){
        injectFuel();
        igniteFuel();
        cout << model << "started , Happy journey!" <<endl;
    }

    void stopAcceleration(){
        cout << "Acceleration stopped!" << endl;
    }

    void stopFuelFlow(){
        cout << "stopping the fuel" << endl;
    }

    void stop(){
        stopAcceleration();
        stopFuelFlow();
        cout << model << "stopped, lock the vehicle!" <<endl;
    }
};

int main(){
    Bike b1; //Object created for hte class Bike
    b1.brand = "Honda";
    b1.model = "Civic";
    b1.engine_type = "Petrol";
    b1.year = 2022;
    b1.price = 500000;

    b1.start(b1.model);
    b1.stop();

    return 0;
}