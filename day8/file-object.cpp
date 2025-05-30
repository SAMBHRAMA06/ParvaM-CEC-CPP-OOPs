#include<iostream>
#include<fstream>
using namespace std;

class Car{
    private:
        string brand, model, varient, features[10];
        int year, price, featureCount;
    
    public:
        void addCarDetails(string carBrand, string carModel, string carVarient, int year, int price){
            brand = carBrand;
            model = carModel;
            varient = carVarient;
            this->year = year;
            this->price = price;
        }

        void addCarfeatures(int count){
            featureCount = count;
            cout << "Enter the " << count << " features of the car: ";
            for(int i = 0; i < count; i++){
                cin.ignore();
                getline(cin, features[i]); //can enter mutliple words along with spaces
            }
        }

        void showCarDetails(){
            ofstream store("car_details.txt");
            store << "The Car details are as follows:" << endl;
            store << "Car Brand: " << brand << endl;
            store << "Car Model: " << model << endl;
            store << "Car Varient: " << varient << endl;
            store << "Launch year: " << year << endl;
            store << "Offer Price: Rs. " << price << endl;
            store << "Car has these features: " << endl;
            for(int i = 0; i <  featureCount; i++){
                store<< "\t" << i+1 << ". " << features[i] << endl;
            }
            store << "------------------------------------------";
        } 
};

int main(){
    string car_brand, car_model, car_varient, car_features[10];
    int features_count, launch_year, launch_price;

    cout << "Enter the Car Details: " << endl;
    cout << "Brand, Model, Varient, Launch year, Launch Price: " << endl;
    cout << "Ex: Tata, Curvv, (Petrol/Diesel/EV), 2025, 5000000" << endl;
    cin >> car_brand >> car_model >> car_varient >> launch_year >> launch_price;

    cout << "Enter the number of the features: " << endl;
    cin >> features_count;

    Car car1;
    car1.addCarDetails(car_brand, car_model, car_varient, launch_year, launch_price);
    car1.addCarfeatures(features_count);
    car1.showCarDetails();
}