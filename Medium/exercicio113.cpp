class Solution {
public:
    vector<vector<int>> result;

    void dfs(TreeNode* node, int targetSum, vector<int>& path) {
        if (!node) return;
        path.push_back(node->val);
        if (!node->left && !node->right && targetSum == node->val) result.push_back(path);
        else {
            dfs(node->left, targetSum - node->val, path);
            dfs(node->right, targetSum - node->val, path);
        }
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        dfs(root, targetSum, path);
        return result;
    }
};
