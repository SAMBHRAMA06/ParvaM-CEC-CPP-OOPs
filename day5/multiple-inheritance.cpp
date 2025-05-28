#include<iostream>
using namespace std;

class Animal {  //Base class - Level 0
    string name;
    public:
        void setName(string animalName) {
           name = animalName;
       }

        string showAnimal() {
            cout << "Name of the Animal: " << endl;
       }

//Animal -> Carnivore - (Symbolic representation)
class Carnivore : public Animal { //Derived class / Base class - Level 1
    string vegetation;
    public:
        void setFood(string food) {
           vegetation = food;
       }

        void showFood() {
           cout << "Type Of Animal: " << vegetation << endl;
       }
};

//Mammal -> Carnivore - (Symbolic representation)
class Mammal : public Carnivore { //Derived class / Base class - Level 2
    public:
        //showFood();
    
   
};

int main(){
    string animal_Name, food_type;

    cout << "Enter the name of the animal & and its food type: ";
    cin >> animal_Name >> food_type;

    Carnivore c1; //Object of derived class
    c1.setName(animal_Name); //Calling base class function

    Mammal m1; //Object of derived class
    m1.setFood(food_type);
}