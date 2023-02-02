//
// Created by Jugesh Kumar on 29-01-2023.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;    //Reading input from STDIN
    cout << "Input number is " << num << endl;	// Writing output to STDOUT
    int fac=1;
    for(int i=num;i>1;i--){
        fac=fac*i;
    }
    cout<<fac;
}