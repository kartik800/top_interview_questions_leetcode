// Problem Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
// Kartik Kumar

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
    vector<int> inorderTraversal(TreeNode* root) {
        // Iterative 
        stack<TreeNode*> st;
        vector<int> ans;
        while(root!=NULL || !st.empty()){
        while(root != NULL){
            st.push(root);
            root = root->left;
        }
        root = st.top();
        st.pop();
        ans.push_back(root->val);
        root = root->right;
        }
        
        // Recursive 
        // vector<int> ans;
        // inorder(root,ans);
        // return ans;
        return ans;
    }

// private:
// void inorder(TreeNode*root, vector<int> &ans){
    
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left, ans);
//     ans.push_back(root->val);
//     inorder(root->right, ans);
// }
};
