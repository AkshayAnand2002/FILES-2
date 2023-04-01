https://leetcode.com/problems/diameter-of-binary-tree/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int result=0;
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        result=max(result,1+left+right);
        //by above we get max of height possible from lst and rst.
        return 1+max(left,right);
        //above line returns height.
        // we used height function to get max height.
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int data=height(root);
        return result-1;//we want path hence -1.
        //else if we wan node return result.
    }
};
//https://www.youtube.com/watch?v=L4_ReIAqLeQ
