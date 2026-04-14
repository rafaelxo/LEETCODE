class exercicio95 {
    private List<TreeNode> build(int start, int end) {
        List<TreeNode> resp = new ArrayList<>();
        if (start > end) {
            resp.add(null);
            return resp;
        }
        for (int i = start; i <= end; i++) {
            List<TreeNode> leftT = build(start, i - 1);
            List<TreeNode> rightT = build(i + 1, end);
            for (TreeNode left : leftT) {
                for (TreeNode right : rightT) {
                    TreeNode root = new TreeNode(i);
                    root.left = left;
                    root.right = right;
                    resp.add(root);
                }
            }
        }
        return resp;
    }

    public List<TreeNode> generateTrees(int n) {
        if (n == 0) return new ArrayList<>();
        return build(1, n);
    }
}
