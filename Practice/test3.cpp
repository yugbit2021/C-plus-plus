//
// Created by Jugesh Kumar on 30-01-2023.
//
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int no;
    int max=INT16_MIN;
    int b = max;
    int min=INT16_MAX;
    int mean = 0;
    for(int i=0;i<n;i++){
        cin>>no;
        if(no>max){
            max=no;
        }
        if(no<min){
            min=no;
        }
        mean=(mean+no);
    }
    mean= mean/n;
    cout<<"Max "<<max<<endl;
    cout<<"Min "<<min<<endl;
    cout<<"Mean "<<mean<<endl;
    return 0;
}