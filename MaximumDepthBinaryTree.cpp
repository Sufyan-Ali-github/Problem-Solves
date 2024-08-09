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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        
        queue<TreeNode*> elementQueue;
        elementQueue.push(root);
        int numberOfLevels = 0;
        
        while (!elementQueue.empty()) {
            int nodeCountLevel = elementQueue.size();
            
            // Process all nodes at the current level
            while (nodeCountLevel > 0) {
                TreeNode* node = elementQueue.front();
                elementQueue.pop();
                
                if (node->left != nullptr) {
                    elementQueue.push(node->left);
                }
                if (node->right != nullptr) {
                    elementQueue.push(node->right);
                }
                
                nodeCountLevel--;
            }
            
            numberOfLevels++;
        }
        
        return numberOfLevels;
        
    }
};