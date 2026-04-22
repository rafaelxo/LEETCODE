def recover_tree(root)
  @first = nil
  @second = nil
  @prev = nil
  inorder(root)
  @first.val, @second.val = @second.val, @first.val if @first && @second
end

def inorder(node)
  return if node.nil?
  inorder(node.left)
  if @prev && @prev.val > node.val
    @first ||= @prev
    @second = node
  end
  @prev = node
  inorder(node.right)
end
