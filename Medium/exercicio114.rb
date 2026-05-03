def flatten(root)
  curr = root
  while curr
    if curr.left
      pre = curr.left
      while pre.right
        pre = pre.right
      end
      pre.right = curr.right
      curr.right = curr.left
      curr.left = nil
    end
    curr = curr.right
  end
end
