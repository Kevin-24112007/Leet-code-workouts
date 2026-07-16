/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func deleteDuplicates(head *ListNode) *ListNode {
    curr := head
    prev := head
    var dup *ListNode
    for curr != nil {
        if curr.Next != nil && curr.Val == curr.Next.Val {
            dup = curr
        }
        if dup != nil {
            if dup.Val == curr.Val {
                if curr == head {
                    head = curr.Next
                    prev = head
                    curr = head
                } else {
                curr = curr.Next
                }
                continue
            }
            dup = nil
        }
        if prev != curr {
            prev.Next = curr
        }
        prev = curr
        curr = curr.Next
    }
    if prev != nil {
        prev.Next = curr
    }
    return head
}