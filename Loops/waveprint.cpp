#include<iostream>
using namespace std;

void waveprint(int arr[3][4],int tr,int tc){
    for(int colno=0;colno<=tc-1;colno++){
    if(colno%2==0){
        //col is even ---->Downward
        for(int rno=0;rno<tr;rno++){
            cout<<arr[rno][colno]<<" ";
        }
    }
    else{
        //col is odd-->upward
        for(int rno=tr-1;rno>=0;rno--){
            cout<<arr[rno][colno]<<" ";
        }
    }
    }
}

int main(){
    int s[3][4]={{3,4,5,1},{6,2,9,4},{8,6,9,13}};

    waveprint(s,3,4);
}