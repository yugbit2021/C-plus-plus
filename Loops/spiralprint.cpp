#include<iostream>
using namespace std;

void spiral(int arr[3][3],int tr,int tc){
    int startrow=0;
    int startcol=0;
    int endcol=tc-1;
    int endrow=tr-1;

    while(startcol<=endcol && startrow<=endrow){

    
//pehla row ka work done
    for(int i=startcol;i<=endcol;i++){
    cout<<arr[startrow][i]<<" ";
    }
    startrow++;//1
    //last col;
    for(int j=startrow;j<=endrow;j++){
        cout<<arr[j][endcol]<<" ";
    }
    endcol--;
    if(startrow<=endrow){
    for(int k=endcol;k>=startcol;k--){
        cout<<arr[endrow][k]<<" ";
    }
    endrow--;
    }
    if(startcol<=endcol){
    for(int l=endrow;l>=startrow;l--){
        cout<<arr[l][startcol]<<" ";
    }
    startcol++;
    }
}
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    spiral(arr,3,3);
}