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
    void inorder(TreeNode *root,vector<int>&element){
        if(root==NULL){
            return;
        }
        inorder(root->left,element);
        element.push_back(root->val);
        inorder(root->right,element);
    }
    bool validbst(TreeNode* root){
        vector<int> element;
        inorder(root,element);
        for(int i=1;i<element.size();i++){
            if(element[i]<=element[i-1]){
                return false;
            }
        }
        return true;
    }
    bool isValidBST(TreeNode* root) {
        return validbst(root);
    }
};