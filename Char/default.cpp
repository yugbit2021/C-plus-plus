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
int main(){
    char arr[100];
    cin.getline(arr,100);
    int ans=lengthofarr(arr);
    cout<<ans;
    return 0;
}