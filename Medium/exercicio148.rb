def sort_list(head)
    return head if head.nil? || head.next.nil?
    slow = head
    fast = head
    prev = nil
    while fast && fast.next
        prev = slow
        slow = slow.next
        fast = fast.next.next
    end
    prev.next = nil
    left = sort_list(head)
    right = sort_list(slow)
    merge(left, right)
end

def merge(l1, l2)
    dummy = ListNode.new(0)
    curr = dummy
    while l1 && l2
        if l1.val <= l2.val
          curr.next = l1
          l1 = l1.next
        else
          curr.next = l2
          l2 = l2.next
        end
        curr = curr.next
    end
    curr.next = l1 || l2
    dummy.next
end
