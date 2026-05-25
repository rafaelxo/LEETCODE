def detectCycle(head)
    return nil if head.nil? || head.next.nil?
    slow = head
    fast = head
    while fast && fast.next
        slow = slow.next
        fast = fast.next.next
        if slow == fast
            start = head
            while start != slow
                start = start.next
                slow = slow.next
            end
            return start
        end
    end
    nil
end
