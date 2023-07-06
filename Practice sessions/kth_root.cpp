#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Wherever we find a greatest or maximize we use binary search
//given n k and x where x^k<=n  maximum of x

long long int kthroot(long long int n, long long int k,long long int st_x,long long int end_x){

    int current_ans;

    while(st_x<=end_x){
        long long int mid = (st_x+end_x)/2;
        if(pow(mid,k)<=n){
        current_ans=mid;
        st_x=mid+1;
    }
    else{
        end_x=mid-1;
    }
    }

    return current_ans; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        long long int k;
        cin>>n>>k;
        if(k==1){
            cout<<n<<endl;
            continue;
        }
        //2<= k <10^4
        cout<<kthroot(n,k,0,sqrt(n))<<endl;
    }
}