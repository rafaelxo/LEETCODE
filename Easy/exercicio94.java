class exercicio94 {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> resp = new ArrayList<>();
        Stack<TreeNode> stack = new Stack<>();
        TreeNode curr = root;
        while (curr != null || !stack.isEmpty()) {
            while (curr != null) {
                stack.push(curr);
                curr = curr.left;
            }
            curr = stack.pop();
            resp.add(curr.val);
            curr = curr.right;
        }
        return resp;
    }
}
