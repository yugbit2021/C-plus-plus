//
// Created by Jugesh Kumar on 17-02-2023.
//
#include <iostream>
using namespace std;
int fun(int n){
    if(n<10){
        return n;
    }
    return (n%10) + fun(n/10);
}
int main(){
    int ans= fun(3456);
    cout<<ans;
    return 0;
}
