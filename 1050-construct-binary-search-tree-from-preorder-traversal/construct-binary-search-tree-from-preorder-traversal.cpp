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
    TreeNode* buildHelper(vector<int>& preorder, int ps, int pe, vector<int>& inorder, int is_, int ie, unordered_map<int, int>& indexMap) {
        if (ps > pe || is_ > ie) return nullptr;

        TreeNode* root = new TreeNode(preorder[ps]);
        int in_idx = indexMap[root->val];
        int leftSize = in_idx - is_;

        root->left = buildHelper(preorder, ps + 1, ps + leftSize, inorder, is_, in_idx - 1, indexMap);
        root->right = buildHelper(preorder, ps + leftSize + 1, pe, inorder, in_idx + 1, ie, indexMap);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder(preorder);
        sort(inorder.begin(), inorder.end());
        unordered_map<int, int> indexMap;
        for (int i = 0; i < inorder.size(); ++i) indexMap[inorder[i]] = i;

        return buildHelper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, indexMap);
    }
};