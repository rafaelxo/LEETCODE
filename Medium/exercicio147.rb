def insertion_sort_list(head)
    dummy = ListNode.new(0)
    curr = head
    while curr
        next_node = curr.next
        prev = dummy
        while prev.next && prev.next.val < curr.val
            prev = prev.next
        end
        curr.next = prev.next
        prev.next = curr
        curr = next_node
    end
    dummy.next
end
