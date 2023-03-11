#include<iostream>
using namespace std;

int main(){
    int arr[100][100];

   int rows,cols;
   cin>>rows>>cols;

   for(int i=0;i<=rows-1;i++){
    for(int j=0;j<=cols-1;j++){
        cin>>arr[i][j];
    }
   }
    return 0;
}