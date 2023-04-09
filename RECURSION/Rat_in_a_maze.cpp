#include<iostream>
using namespace std;

bool ratinmaze(char maze[4][5],int sol[4][4],int i, int j,int rows,int cols){
    //base case
    if(i==rows-1 && j==cols-1){
        sol[i][j]=1;
        //print sol matrix
        for(int l=0;l<rows;l++){
            for(int m=0;m<cols;m++){
                cout<<sol[l][m]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    //recursive case

    sol[i][j]=1;

    //Forward
   if(j<=cols-2 &&maze[i][j+1]!='B'){
    bool aagekaansmila=ratinmaze(maze,sol,i,j+1,rows,cols);
    if(aagekaansmila==true){
        return true;
    }
   }

   //Backward
   if(i<=rows-2 &&maze[i+1][j]!='B'){
    bool aagekaansmila=ratinmaze(maze,sol,i+1,j,rows,cols);
    if(aagekaansmila==true){
        return true;
    }
    }
    sol[i][j]=0;
    return false;

}

int main(){
    char maze[4][5]={"UBUU","UUUU","BBBU","UBBU"}; // null char h isliye 5 * 5 liye

    int sol[4][4]={0};
    ratinmaze(maze,sol,0,0,4,4);
    return 0;
}