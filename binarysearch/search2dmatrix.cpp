//leetcode
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
          int i = 0;
              int n = matrix[i].size();

    int j=n-1;
  while(i<m && j>=0){
    if(matrix[i][j]==target){
        return true;
    }
    else if(matrix[i][j]>target){
        j--;
    }
    else if(matrix[i][j]<target){
        i++;
    }
 }
    return false;
    }
};