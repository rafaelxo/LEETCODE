class exercicio104 {
    public int getHeight(TreeNode a) {
        if (a == null) return 0;
        else {
            int hLeft = getHeight(a.esq);
            int hRight = getHeight(a.dir);
            return (hLeft > hRight ? hLeft : hRight) + 1;
        }
    }
    public int maxDepth(TreeNode root) {
        return getHeight(root);
    }
}
