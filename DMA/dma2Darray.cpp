#include<iostream>
using namespace std;
int main(){
    // int* ptr1=new int[4];
    // int* ptr2=new int[4];
    // int* ptr3=new int[4];

    int**arr=new int*[3];
    for(int i=0;i<3;i++){
    //     arr[0]=new int[4];
    // arr[1]=new int[4];
    // arr[2]=new int[4];
        arr[i]=new int[4];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
    }

    
    for(int i=0;i<3;i++){
    //     delete []arr[0];
    // arr[0]=NULL
    // delete []arr[1];
    // arr[1]=NULL
    // delete arr[2];
    // arr[2]=NULL;
        delete []arr[i];
        arr[i]=NULL;
    }


    delete []arr;
    arr=NULL;
    return 0;
}