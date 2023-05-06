#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

// int minstepstoreach1(int n){//10
//     //base case 
//     if(n==1){
//         return 0;
//     }
//     //rec case
//     int x=INT_MAX;
//     int y=INT_MAX;
//     int z=INT_MAX;
//     x=minstepstoreach1(n-1);//9 to 1
//     if(n%2==0){
//         //to mai divide by 2 kr sakta hu
//         y=minstepstoreach1(n/2);
//     }
//     if(n%3==0){
//         z=minstepstoreach1(n/3);
//     }
//     return min(x,min(y,z))+1;
// }
//topdown
int dpminstepstoreach1(int n,int *arr){//10
    //base case 
    if(n==1){
        return arr[n]=0;
    }

    if(arr[n]!=-1){
        return arr[n]; 
    }
    //rec case
    int x=INT_MAX;
    int y=INT_MAX;
    int z=INT_MAX;
    x=dpminstepstoreach1(n-1,arr);//9 to 1
    if(n%2==0){
        //to mai divide by 2 kr sakta hu
        y=dpminstepstoreach1(n/2,arr);
    }
    if(n%3==0){
        z=dpminstepstoreach1(n/3,arr);
    }
    return arr[n]=min(x,min(y,z))+1;
}

int bottomup(int n){
    int *arr=new int[n+1];
    arr[1]=0;


    for(int i=2;i<=n;i++){
    int x=INT_MAX; // -1
    int y=INT_MAX;// /2
    int z=INT_MAX;// /3
    x=arr[i-1];
    if(i%2==0){
        y=arr[i/2];
    }
    if(i%3==0){
        z=arr[i/3];
    }
    arr[i]=min(x,min(y,z))+1;
    }
    return arr[n];
}

int main(){
    int n;
    cin>>n;
    //cout<<minstepstoreach1(n);

    int *arr=new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=-1;
    }
    cout<<dpminstepstoreach1(n,arr)<<endl;
    cout<<bottomup(n);

}