https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        //transpose
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //below interchanging rows.
        for(int i=0;i<(n/2);i++){
            for(int j=0;j<n;j++){
                swap(matrix[i][j],matrix[n-1-i][j]);
            }
        }
    } 
};
