https://practice.geeksforgeeks.org/problems/find-all-possible-paths-from-top-to-bottom/1?page=1&difficulty[]=0&category[]=Backtracking&sortBy=submissions
class Solution
{
public:
    vector<vector<int>> res;
    //final
    vector<int>temp;
    void calc(vector<vector<int>>&grid,int n,int m,int i,int j,vector<int>&temp){
        temp.push_back(grid[i][j]);
        //0,0 th element pushed
        if(i+1<n){
            calc(grid,n,m,i+1,j,temp);
            //moving to next row
        }
        if(j+1<m){
            calc(grid,n,m,i,j+1,temp);
            //moving to next column
        }
        if(i==n-1 && j==m-1){
            res.push_back(temp);
            //when it reached bottom right element
            //then whole temp array is pushed in result.
        }
        temp.pop_back();
        //above line for backtracking.
        //eg we reached 1 2 3 6
        //temp.pop_back()
        //6 is popped then 3 is popped.
        //then we get path 1 2 5 6
        //then 2 is popped
        //we get 1 4 5 6.
        //thus the above line helps in backtracking.
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        calc(grid,n,m,0,0,temp);
        //grid n*m starting from 0,0 th element
        return res;
    }
};
