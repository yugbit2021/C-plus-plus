#include<iostream>
using namespace std;

class car{
    public:

    string name;
    string color;
    int price;
    int seats;
};

int main(){
    car car1;
    car1.name="BMW";
    car1.color="Black";
    car1.price=1000000;
    car1.seats=6;
    cout<<car1.name<<endl;
    cout<<car1.price<<endl;

    return 0;
}