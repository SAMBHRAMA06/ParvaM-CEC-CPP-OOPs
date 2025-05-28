#include<iostream>
using namespace std;

class Vehicle{
    private:
        string riding_mode;
    public:
        void setMode(string Mode){
            riding_mode = Mode;
        }

        string useMode(){
            return riding_mode;
        }
};

class Bike : public Vehicle {
    private:
        string brand;
    public:
        void setName(string name){
            brand = name;
        }

        string showName(){
            return brand;
        }
};

int main(){
    string mode_of_transport, brand_name;

    cout << "Enter the Mode of Transport & Brand nmae of your bike:";
    cin >> mode_of_transport >> brand_name;

    Bike bike1;
    bike1.setMode(mode_of_transport);
    bike1.setName(brand_name);

    cout << "I've a "<< bike1.showName() << " bike, I can travel to my native via " << bike1.useMode();
}
