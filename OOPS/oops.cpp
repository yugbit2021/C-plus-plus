#include<iostream>
using namespace std;

class car{
    public:

    string name;
    string color;
    int price;
    int seats;
    // car(){

    // }
};

int main(){
    //whenever object is created contructor is called 
    car car1; //car1 is the object
    car1.name="BMW";
    car1.color="Black";
    car1.price=1000000;
    car1.seats=6;
    cout<<car1.name<<endl;
    cout<<car1.price<<endl;

    return 0;
}