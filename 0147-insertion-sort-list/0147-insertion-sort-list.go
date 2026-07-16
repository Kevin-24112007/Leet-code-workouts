/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func insertionSortList(head *ListNode) *ListNode {
    dummy := new(ListNode)
    for head != nil {
        curr := dummy
        for ; curr.Next != nil && curr.Next.Val < head.Val; curr = curr.Next {
        }
        curr.Next, head.Next, head = head, curr.Next, head.Next
    }
    return dummy.Next
}