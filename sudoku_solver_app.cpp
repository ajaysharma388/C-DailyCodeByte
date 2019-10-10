#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

const int D = 10;

void printGrid(int grid[D][D],int n){
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}


bool canPlace(int board[D][D],int num,int i,int j,int n){
    if(board[i][j]!=0) return false;
    for(int k=0;k<n;++k){
        if(board[i][k]==num || board[k][j]==num){
            return false;    
        }  
    }
    int r = i,c = j;
    while(r%3!=0){
        r--;
    }
    while(c%3!=0){
        c--;
    }
    for(int x=r;x<r+3;++x){
        for(int y=c;y<c+3;++y){
            if(board[x][y] == num) return false;
        }    
    }
    return true;
}

bool solve(int board[D][D],int n,int row,int col){
    if(row==n){
        printGrid(board,n);
        return true;
    }
    if(col==n) solve(board,n,row+1,0);
    if(board[row][col]!=0) solve(board,n,row,col+1);
    for(int curNum=1;curNum<=n;++curNum){
        if(canPlace(board,curNum,row,col,n)){
            board[row][col] = curNum;
            bool success = solve(board,n,row,col+1);
            if(success) return true;
            board[row][col] = 0;
        }
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUGDE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,board[D][D];
    cin >> n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> board[i][j];
        }
    }
    bool isSuccess = solve(board,n,0,0);
    return 0;
}