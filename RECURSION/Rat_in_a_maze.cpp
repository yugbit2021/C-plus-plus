#include<iostream>
using namespace std;

bool ratinmaze(char maze[4][4],sol[4][4],int i, int j,int rows,int cols){
    //base case

    //recursive case

    sol[i][j]=1;

    //Forward
   if(j<=cols-1 &&maze[i][j+1]!='B'){
    bool aagekaansmila=ratinmaze(maze,sol,i,j+1,rows,cols);
    if(aagekaansmila==true){
        return true;
    }
   }

   //Backward
   if(i<=rows-1&&maze[i+1][j]!='B'){
    bool aagekaansmila=ratinmaze(maze,sol,i+1,j,rows,cols);
    if(aagekaansmila==true){
        return true;
    }
    }
    sol[i][j]=0;
    return false;

}

int main(){
    char maze[4][4]={{'U','B','B','B'},
                   {'U','B','U','U'},
                   {'U','B','B','U'},
                   {'U','U','U','U'}};

    int sol[4][4]={0};
    ratinmaze(maze,sol,0,0);
    return 0;
}