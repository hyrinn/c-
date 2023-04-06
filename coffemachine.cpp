#include<iostream>
using namespace std;
class CoffeeMachine{
private:
    int coffee;
    int water;
    int sugar;
public:
    CoffeeMachine(int a, int b, int c);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill();
    int show();
};
CoffeeMachine::CoffeeMachine(int a, int b, int c){
    coffee = a;
    water = b;
    sugar = c;
}
void CoffeeMachine::drinkEspresso(){
    coffee -= 1;
    water -= 1;
}
void CoffeeMachine::drinkAmericano(){
    coffee -= 1;
    water -= 2;
}
void CoffeeMachine::drinkSugarCoffee(){
    coffee -= 1;
    water -= 2;
    sugar -= 1;
}

int CoffeeMachine::show(){
    cout << "커피 머신 상태, " << "커피:" << coffee << ' ' << "물:" << water << ' '<< "설탕:" << sugar << ' '<< endl;
} 

void CoffeeMachine::fill(){
    coffee = 10;
    water = 10;
    sugar = 10;
}
int main(){
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.fill();
    java.show();
}