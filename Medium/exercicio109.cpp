class Solution {
public:
    ListNode *curr;

    int getSize(ListNode *head) {
        int size = 0;
        while (head) {
            size++;
            head = head->next;
        }
        return size;
    }

    TreeNode *buildBST(int left, int right) {
        if (left > right) return nullptr;
        int mid = left + (right - left) / 2;
        TreeNode *lChild = buildBST(left, mid - 1);
        TreeNode *root = new TreeNode(curr->val);
        root->left = lChild;
        curr = curr->next;
        root->right = buildBST(mid + 1, right);
        return root;
    }

    TreeNode *sortedListToBST(ListNode *head) {
        int size = getSize(head);
        curr = head;
        return buildBST(0, size - 1);
    }
};
