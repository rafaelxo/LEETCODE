class exercicio222 {
    private int getLeftHeight(TreeNode node) {
        int height = 0;
        while (node != null) {
            height++;
            node = node.left;
        }
        return height;
    }

    private int getRightHeight(TreeNode node) {
        int height = 0;
        while (node != null) {
            height++;
            node = node.right;
        }
        return height;
    }

    public int countNodes(TreeNode root) {
        if (root == null) return 0;
        int lHeight = getLeftHeight(root), rHeight = getRightHeight(root);
        if (lHeight == rHeight) return (1 << lHeight) - 1;
        return 1 + countNodes(root.left) + countNodes(root.right);
    }
}
