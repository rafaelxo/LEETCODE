public class Solution {
    private void Preorder(TreeNode node, List<int> resp) {
        if (node == null) return;
        Preorder(node.left, resp);
        Preorder(node.right, resp);
        resp.Add(node.val);
    }
    public IList<int> PostorderTraversal(TreeNode root) {
        List<int> resp = new List<int>();
        Preorder(root, resp);
        return resp;
    }
}
