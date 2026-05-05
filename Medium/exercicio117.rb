def connect(root)
    curr = root
    while curr
        dummy = Node.new(0)
        tail = dummy
        while curr
            if curr.left
                tail.next = curr.left
                tail = tail.next
            end
            if curr.right
                tail.next = curr.right
                tail = tail.next
            end
            curr = curr.next
        end
        curr = dummy.next
    end
    root
end
