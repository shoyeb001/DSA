#include<iostream>
using namespace std;

bool solvemazeuntil(int maze[4][4], int x, int y, int sol[4][4]);

void printsolution(int sol[4][4]){
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        cout << ""<< sol[i][j];
      }
     cout << endl;

    }
}

bool issafe(int maze[4][4], int x, int y){
    if (x>=0 && x<4 && y>=0 && y<4 && maze[x][y]==1)
    {
        return true;
    }
    else{
        return false;
    }
    
}

bool solvemaze(int maze[4][4]){
    int sol[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    if (solvemazeuntil(maze,0,0,sol)==false){
        cout<<"solution does not exit";
        return false;
    }
    printsolution(sol);
    return true;
}

bool solvemazeuntil(int maze[4][4], int x, int y, int sol[4][4]){
    if (x==4-1 && y==4-1 && maze[4][4]==1)
    {
        sol[x][y]=1;
        return true;
    }
    if (issafe(maze,x,y)==true)
    {
        if (sol[x][y]==1)
        {
            return false;
        }
        sol[x][y]=1;
        if (solvemazeuntil(maze,x+1,y,sol)==true)
        {
            return true;
        }
           if (solvemazeuntil(maze,x,y+1,sol)==true)
        {
            return true;
        }
        sol[x][y]=0;
        return false;
        
    }
    return false;
}

int main(){
    int maze[4][4] = {{1, 0, 0, 0},{1, 1, 0, 1},{0, 1, 0, 0},{1, 1, 1, 1}};
    solvemaze(maze);
    return 0;

}
