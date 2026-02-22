public class Solution {
    private void Preorder(TreeNode node, List<int> resp) {
        if (node == null) return;
        resp.Add(node.val);
        Preorder(node.left, resp);
        Preorder(node.right, resp);
    }
    public IList<int> PreorderTraversal(TreeNode root) {
        List<int> resp = new List<int>();
        Preorder(root, resp);
        return resp;
    }
}
