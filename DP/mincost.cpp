#include<iostream>
#include<climits>
using namespace std;

//cr = current row
//cc = current column

// int mincost(int cost[4][4],int cr,int cc,int drn,int dcn){

//     if(drn==0 && dcn==0){
//         return cost[drn][dcn];
//     }

//     if(drn<0 || dcn<0){
//         return INT_MAX;
//     }
    
//     //rec case
//     int op1=mincost(cost,cr,cc,drn-1,dcn);
//     int op2=mincost(cost,cr,cc,drn,dcn-1);
//     return min(op1,op2)+cost[drn][dcn];
// }

int tdmincost(int cost[4][4],int cr,int cc,int drn,int dcn,int arr[100][100]){

    if(drn==0 && dcn==0){
        return cost[drn][dcn];
    }

    if(drn<0 || dcn<0){
        return INT_MAX;
    }
    
    if(arr[drn][dcn]!=0){
        return arr[drn][dcn];
    }

    //rec case
    int op1=tdmincost(cost,cr,cc,drn-1,dcn,arr);
    int op2=tdmincost(cost,cr,cc,drn,dcn-1,arr);
    return arr[dcn][drn]= min(op1,op2)+cost[drn][dcn];
}

int bpmincost(int cost[4][4],int drn,int dcn){
    int arr[100][100]={0};

    for(int i=0;i<=drn;i++){
    for(int j=0;j<=dcn;j++){
    if(i==0 && j==0){
        arr[i][j]=cost[i][j];
    }
    else if(i==0){
        arr[i][j]=arr[i][j-1]+cost[i][j];
    }
    else if(j==0){
        arr[i][j]=arr[i-1][j]+cost[i][j];
    }
    else{
    arr[i][j]=min(arr[i-1][j],arr[i][j-1])+cost[i][j];
    }
    }
}
    return arr[drn][dcn];
}
int main(){
    int cost[4][4]={
        {2,3,1,4},
        {3,5,3,2},
        {2,6,6,1},
        {3,4,2,5}};

    int drn;//destination row number
    cin>>drn;

    int dcn;//destination column number
    cin>>dcn;

    //cout<<mincost(cost,0,0,drn,dcn)<<endl;

    int arr[100][100]={0};
    cout<<tdmincost(cost,0,0,drn,dcn,arr)<<endl;
    cout<<bpmincost(cost,drn,dcn);
}