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

void copy(char arr1[100],char arr2[100]){
    int i=0;
    int j=0;

    while(j<=lengthofarr(arr2)){
    arr1[i]=arr2[j];
    i++;
    j++;
}
}

int main(){
    char arr1[100];
    char arr2[100];
    cin.getline(arr2,100);

    copy(arr1,arr2);

    cout<<arr1<<endl;
    cout<<arr2<<endl;
    return 0;
}