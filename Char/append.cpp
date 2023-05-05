#include<iostream>
using namespace std;

int lengthofarr(char arr[]){
    int i=0;
    int count=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

append(char arr1[100],char arr2[100]){
    int i=lengthofarr(arr1);
    int j=0;

    while(j<=lengthofarr(arr2)){
    arr1[i]=arr2[j];
    i++;
    j++;
    }

    cout<<arr1<<endl;
    cout<<arr2<<endl;
    
}

int main(){
    char arr1[100];
    cin.getline(arr1,100);//Hello
    char arr2[100];
    cin.getline(arr2,100);//coding

    //arr1   hellocoding
    //arr2   coding 

    append(arr1,arr2);
    return 0;
}