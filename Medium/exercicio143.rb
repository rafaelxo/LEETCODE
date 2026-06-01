def reorder_list(head)
    return if head.nil? || head.next.nil?
    slow = head
    fast = head
    while fast && fast.next
        slow = slow.next
        fast = fast.next.next
    end
    prev = nil
    curr = slow.next
    slow.next = nil
    while curr
        nxt = curr.next
        curr.next = prev
        prev = curr
        curr = nxt
    end
    first = head
    second = prev
    while second
        tmp1 = first.next
        tmp2 = second.next
        first.next = second
        second.next = tmp1
        first = tmp1
        second = tmp2
    end
end