def zigzag_level_order(root)
  return [] if root.nil?
  result = []
  queue = [root]
  left_to_right = true
  while !queue.empty?
    level_size = queue.size
    level = []
    level_size.times do
      node = queue.shift
      level << node.val
      queue << node.left if node.left
      queue << node.right if node.right
    end
    level.reverse! unless left_to_right
    result << level
    left_to_right = !left_to_right
  end
  result
end
