#include<iostream>
using namespace std;

class Pizza {
    private:
        string secretIngredient;

    public:
        string pizzaType , size;
        int price;
        bool isPaymentDone;

        void orderPizza(){
            cout << "Oder the pizza by selecting your favorite pizza!" << endl;
        }

        void bookPizza(){
            cout << "Booking pizza..." << endl;
        }

        void bakePizza(string type , string pizzaSize){
            pizzaType = type; 
            size =pizzaSize;
            cout << "Pizza Type: "<< pizzaType << ", Size: " << size << endl;
        }

        void addIngredient(string secret){
            secretIngredient = secret;
        }

        void  confirmOrder(){
            cout << "Your order is confirmed!" << endl;
        }

        bool checkPayment(int money, bool payment){
            price = money;
            isPaymentDone = payment;
            if(isPaymentDone == true){
                cout << "Amount Paid :Rs." << price << ",Payment successful!" << endl;
                confirmOrder();
                bookPizza();
                return true;
            }
            else{
                cout << "Amount due: Rs." << price << ",Payment pending!" << endl;
                return false;
            }
            
        }

        void servePizza(int amount , bool paid , string typeofPizza, string sizeOfPizza, string secretItem){
            if(!checkPayment(amount, paid)){
                cout << "Order Cancelled due to the pendind payment!" << endl;
                return;
        }
        bakePizza(typeofPizza, sizeOfPizza);
        addIngredient(secretItem);
        cout << "Pizza served, Enjoy your Pizza!" << endl;
        }


    };

    int main() {
        string pizzatype, size ,secretIng;
        int pizzaAmount;
        bool amountPaid;

        Pizza customer1;
        customer1.orderPizza();

        cout << "Enter the Pizza Type (veg/non-veg), Size (small/medium/large): "<< endl;
        cin >> pizzatype >> size;

        pizzaAmount = 399;
        cout << "Did you pay the amount (Type '1' if paid / Type '0' if not paid): "<< endl;
        cin >> amountPaid;

        customer1.servePizza(pizzaAmount, amountPaid, pizzatype, size, secretIng);
    }

        
    






















































