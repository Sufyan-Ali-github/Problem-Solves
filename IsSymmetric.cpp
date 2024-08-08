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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL){
            return true;
        }
        queue<TreeNode*> leftTree;
        queue<TreeNode*> rightTree;
        leftTree.push(root->left);
        rightTree.push(root->right);
        while(!leftTree.empty() && !rightTree.empty()){
            TreeNode* leftNode=leftTree.front();
            TreeNode* rightNode=rightTree.front();
            leftTree.pop();
            rightTree.pop();
            
            if(leftNode == NULL &&  rightNode == NULL) continue;
            if(leftNode == NULL ||  rightNode == NULL) return false;
            if(leftNode->val != rightNode->val) return false;;

            leftTree.push(leftNode->left);
            rightTree.push(rightNode->right);

            leftTree.push(leftNode->right);
            rightTree.push(rightNode->left);

        }
        return true;
        
    }
};