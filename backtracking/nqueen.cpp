#include <iostream>
using namespace std;

void printsol(int board[n][n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            cout << " "<< board[i][j] << "";
        }
        
    }
    
}

bool issafe(int board[n][n],int row, int col){
    int i,j;
    for ( i = 0; i < col; i++)
    {
        if (board[row][i])
        {
            return false;
        }
        
    }
    for ( i = row, j = col; i>=0 && j>=0; i--, j--)
    {
      if (board[i][j])
      {
        return false;
      }
      
    }
    for (i=row, j=col; j>=0 && i<n; i++, j--)
    {
        if (board[i][j])
        {
            return false;
        }
        
    }
    return true;
    
}

bool solvenquntil(int board[n][n], int col){
    if (col>=n)
    {
        return true;
    }
    for (int i = 0; i < n; i++)
    {
        if (issafe(board,i,col))
        {
            board[i][col]= 1;
        }
        if (solvenquntil(board,col+1))
        {
          return true;
          board[i][col]=0;
        }
        
        
    }
    return false;
    
}

bool solvenq(){
    int board[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
 
    if (solvenquntil(board, 0) == false) {
        cout << "Solution does not exist";
        return false;
    }
 
    printsol(board);
    return true;

}

int main()
{
    solvenq();
    return 0;
}
