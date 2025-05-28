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

};

//Mammal -> Carnivore - (Symbolic representation)
class Mammal : public Carnivore { //Derived class / Base class - Level 2
    string habitat;
    public:
        void setHabitat(string place) {
           habitat = place;
       }

        void showHabitat() {
           cout << "Living Place: " << habitat << endl;
       }

};

int main(){
    string animal_Name, food_type, Place_Of_living;

    cout << "Enter the name of the animal & and its food type: ";
    cin >> animal_Name >> food_type >> Place_Of_living;

    Carnivore c1; //Object of derived class
    c1.setName(animal_Name);
    c1.setFood(food_type); //Calling base class function

    Mammal m1; //Object of derived class
    m1.setName(animal_Name);
    m1.setFood(food_type);
    m1.setHabitat(Place_Of_living); //Calling base class function

    m1.showAnimal(); 
    m1.showFood();        
    m1.showHabitat(); 
}