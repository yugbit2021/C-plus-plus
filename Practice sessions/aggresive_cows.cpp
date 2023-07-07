#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool amIabletoplaceallcnoofcows(int cowsplace[10000],int n,int tcp,int dist){
    int cptn=1;
    int prevcplacedat=cowsplace[0];

    for(int i=1;i<n;i++){
    if(cowsplace[i]-prevcplacedat>=dist){
        cptn++;
        prevcplacedat=cowsplace[i];
        if(cptn==tcp){
            return true;
        }
    }
}
   if(cptn<tcp){
    return false;
   }
   return true;
}

int main(){
    int n;//total number of places
    cin>>n;

    int cows;
    cin>>cows;

    int cowsplace[n];
    for(int i=0;i<n;i++){
        cin>>cowsplace[i];
    }

    sort(cowsplace,cowsplace+n);
    int s=cowsplace[0];
    int e=cowsplace[n-1]-cowsplace[0];

    int currentmaxdistance;

    while(s<e){
         int mid=(s+e)/2;
         if(amIabletoplaceallcnoofcows(cowsplace,n,cows,mid)){
            currentmaxdistance=mid;
            s=mid+1;
         }
         else{
              e=mid-1;
        }
    }

   cout<<currentmaxdistance;
}