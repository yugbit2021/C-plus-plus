#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    cin.ignore();//ignore one char

    char str[100];
    cin.getline(str,100);

    cout<<n<<endl;
    cout<<str<<endl;
}