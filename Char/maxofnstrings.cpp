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
    int n;
    cin>>n;

    cin.ignore();

    char arr1[100];
    cin.getline(arr1,100);

    char maxstring[100];
    copy(maxstring,arr1);
    int mleng=lengthofarr(arr1);

    for(int i=1;i<n;i++){
    cin.getline(arr1,100);
    if(lengthofarr(arr1)>mleng){
        copy(maxstring,arr1);
        mleng=lengthofarr(arr1);
    }
    }

    cout<<maxstring<<endl;
    cout<<mleng;
}