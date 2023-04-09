#include<iostream>
using namespace std;
int c=0;

bool kyamarakhsaktahu(int solboard[100][100],int n,int i,int j){
    //2 , 2
    //vertical check
    for(int m=i-1;m>=0;m--){
        if(solboard[m][j]==1){
            return false;
        }
    }

    //diagonal rd
    int u = i--;
    int v=j++;
    while(u>=0 && v<n){
        if(solboard[u][v]==1){
            return false;
        }
        u--;
        v++;
    }
    //left diagonal
    int p=i--;
    int q=j--;
    while(p>=0 && q>=0){
        if(solboard[p][q]==1){
            return false;
        }
        p--;
        q++;
    }

    return true;
    }


bool nqueen(int solboard[100][100],int n,int i){
    //base case
    if(i==n){
        //print sol matrix
        for(int l=0;l<n;l++){
            for(int m=0;m<n;m++){
                cout<<solboard[l][m]<<" ";
            }
            cout<<endl;
        }
        c++;
        cout<<endl;
        return false;
    }

    //recursive case
    for(int j=0;j<n;j++){
         //pahle check kya me rakh sakta hu 
    if(kyamarakhsaktahu(solboard,n,i,j)==true){
        solboard[i][j]=1;
        bool aagekaans=nqueen(solboard,n,i+1);
        if(aagekaans==true){
            return true;
        }
        solboard[i][j]=0;
    }
    }
    return false;
}

int main(){
    int solboard[100][100]={0};
    int n;
    cin>>n;
    nqueen(solboard,n,0);
    cout<<"total paths "<<c<<endl;
    return 0;
}