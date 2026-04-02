//https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/847568692/

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
    //vector<int> arr;-->method 1:
    vector<int> preorderTraversal(TreeNode* root) {

        //method 2:iterative approach
        vector<int> preorder;
        if(root==NULL)
        {
            return preorder;
        }
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            root=st.top();
            st.pop();//LIFO
            preorder.push_back(root->val);
            if(root->right!=NULL)
            {
                st.push(root->right);
            }
            if(root->left!=NULL)
            {
                st.push(root->left);
            }
        }
        return preorder;

        //method 1:recursive
        /*if(root==NULL)
        {
            return arr;
        }
        arr.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return arr;*/
        
    }
};
