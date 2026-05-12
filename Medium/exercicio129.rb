def sum_numbers(root)
    dfs(root, 0)
end

def dfs(node, curr)
    return 0 if node.nil?
    curr = curr * 10 + node.val
    if node.left.nil? && node.right.nil?
        return curr
    end
    dfs(node.left, curr) + dfs(node.right, curr)
end
