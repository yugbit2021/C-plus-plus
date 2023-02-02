//
// Created by Jugesh Kumar on 29-01-2023.
//
#include <iostream>
using namespace std;
int main() {
    int s[100] ;
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>s[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
