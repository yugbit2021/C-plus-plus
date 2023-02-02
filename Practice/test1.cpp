//
// Created by Jugesh Kumar on 29-01-2023.
//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/painting-the-logo/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
   cin>>n;
    int b=n;

    int count = 0;
    int zero_count=0;
    for(int i=1;n!=0;i++){
        if(n%10==0){
            zero_count++;
        }
        count++;
        n=n/10;
    }

if(zero_count>0){
    int i=count-1;
    int arr[count];
    while(b!=0) {
        if (b % 10 == 0) {
            arr[i]='C';
        }
        else{
            arr[i]=b%10;
        }
        i--;
        b=b/10;
    }
    for(i=0;i<count;i++){
        cout<<arr[i];
    }
}
else{
    cout<<"Zero is not present";
}
        return 0;
}