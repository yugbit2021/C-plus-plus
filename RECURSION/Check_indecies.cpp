#include<iostream>
using namespace std;

bool is7present(int arr[],int n,int i){
    //base case
    if(i==n){
        return false;
    }
    //rec case
    if(arr[i]==7){
        return true;
    }
    return is7present(arr,n,i+1);

}

int firstindexof7(int arr[],int n,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==7){
        return i;
    }
    return firstindexof7(arr,n,i+1);
}
int lastindexof7(int arr[],int n,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==7){
        return i;
    }
    return lastindexof7(arr,n,i-1);
}

void allindicesof7(int arr[],int n,int i){
    //base 
    if(i==n){
        return;
    }
    //rec
    if(arr[i]==7){
        cout<<i<<" ";
    }
    allindicesof7(arr,n,i+1);
}

int main(){
    int arr[]={3,4,6,5,7,2,7,2,7};
    int n= sizeof(arr)/sizeof(int);
    if(is7present(arr,n,0)==true){
        cout<<"Present";
    }else{
        cout<<"Not Present";
    }
    cout<<endl;

    //first index
    cout<<firstindexof7(arr,n,0)<<endl;
    cout<<lastindexof7(arr,n,n-1)<<endl;
    allindicesof7(arr,n,0);
    cout<<endl;
}