def level_order(root)
  return [] if root.nil?
  result = []
  queue = [root]
  until queue.empty?
    level_size = queue.size
    level = []
    level_size.times do
      node = queue.shift
      level << node.val
      queue << node.left if node.left
      queue << node.right if node.right
    end
    result << level
  end
  result
end
