#include<iostream>
using namespace std;

int main(){

    //how to declare char arrays
    //datatype nameofarr[size];
    // char arr[]={'a','b','c','\0'};
    // // for(int i=0;arr[i]!='\0';i++){
    // //     cout<<arr[i]<<" ";
    // // }
    // cout<<arr<<endl;

    // char arr[]="dog";
    // //by default last me \0 daal hua hota hai
    // cout<<arr<<endl;

//     char arr[100];

//     // int n;
//     // cin>>n;
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     // for(int i=0;i<n;i++){
//     //     cout<<arr[i]<<" ";
//     // }

//    // cin.getline(arrname,size);
//    cin.getline(arr,100);
//     cout<<arr;

char arr[100];
//cin.getline(arr,100,delimiter);//by default it has 3rd argument /n
cin.getline(arr,100,'g'); // jaise hi g aayega ye wahi tk print karega
cout<<arr<<endl;
    return 0;
}