#include <bits/stdc++.h>
using namespace std;

bool check(int mid,int arr[],int size,int cows){
    int pos=arr[0];
    cows--;
    for(int i=1;i<size;i++){
        if(arr[i]-pos>=mid){
            pos=arr[i];
            cows--;
        }
    }
    if(cows<=0){
        return true;
    }
    return false;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int cows;
        cin>>cows;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int lo=1;
        int hi=arr[n-1];
        int ans=INT_MIN;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(check(mid,arr,n,cows)){
                ans=mid;
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        cout<<"max distance is "<<ans;
    }
}