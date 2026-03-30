class exercicio124 {
    private int sum = Integer.MIN_VALUE;

    public int maxPathSum(TreeNode root) {
        dfs(root);
        return sum;
    }

    private int dfs(TreeNode node) {
        if (node == null) return 0;
        int left = Math.max(0, dfs(node.left)), right = Math.max(0, dfs(node.right));
        int curr = node.val + left + right;
        sum = Math.max(sum, curr);
        return node.val + Math.max(left, right);
    }
}
