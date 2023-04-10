#include<iostream>
#include<math.h>
using namespace std;
bool kyamainnumdaalsaktahu(int mat[9][9],int i,int j,int num,int n){

    //vertical check
    for(int k=0;k<n;k++){
        if(mat[k][j]==num){
            return false;
        }
    }

    //horizontal check
    for(int k=0;k<n;k++){
        if(mat[i][k]==num){
            return false;
        }
    }

    //3 x 3 check
    int sn=sqrt(n);
    int si=(i/n)*sn;
    int sj=(j/n)*sn;

   for(int l=si;l<si+sn;l++){
        for(int m=sj;m<sj+sn;m++){
        if(mat[l][m]==num){
        false;
    }
    }
    }
    return true;
}

bool sudokusolver(int mat[9][9],int i,int j, int n){
    //base case
    if(i==n){
        for(int l=0;l<n;l++){
            for(int m=0;m<n;m++){
                cout<<mat[l][m]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    //recursive case
    if(j==n){
        return sudokusolver(mat,i+1,0,n);
    }
    //agr wo filled hai toh seedha aage badho
    if(mat[i][j]!=0){
        return sudokusolver(mat,i,j+1,n);
    }
    else{
        for(int num=1;num<=9;num++){
        if(kyamainnumdaalsaktahu(mat,i,j,num,n)==true){
            mat[i][j]=num;
            bool baakicellskaans = sudokusolver(mat,i,j+1,n);
            if(baakicellskaans==true){
                return true;
            }
            mat[i][j]=0; // backtracking
        }
    }

    }
    return false;
}

int main(){
    int mat[9][9]={
         {0,3,0,0,7,0,0,0,0},
         {6,0,0,1,9,5,0,0,0},
         {0,9,8,0,0,0,0,6,0},
         {8,0,0,0,6,0,0,0,3},
         {4,0,0,8,0,3,0,0,1},
         {7,0,0,0,2,0,0,0,6},
         {0,6,0,0,0,0,2,8,0},
         {0,0,0,4,1,9,0,0,5},
         {0,0,0,0,8,0,0,7,9} };

         sudokusolver(mat,0,0,9);
    return 0;
}