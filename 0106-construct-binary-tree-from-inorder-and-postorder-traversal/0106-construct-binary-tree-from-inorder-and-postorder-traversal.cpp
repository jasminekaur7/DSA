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
   TreeNode* build(vector<int> &inorder, vector<int> &postorder, int& postIndex, int inStart, int inEnd){
    if(inStart>inEnd)
    return NULL;
    int rootVal = postorder[postIndex];
    postIndex--;
    TreeNode* root = new TreeNode(rootVal);
    int pos = inStart;
    while(inorder[pos]!=rootVal)
    pos++;
            root->right = build(inorder, postorder, postIndex, pos+1, inEnd);
    root->left = build(inorder, postorder, postIndex, inStart, pos-1);
        return root;
   }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size()-1;
        return build(inorder, postorder, postIndex, 0, inorder.size()-1);
    }
};