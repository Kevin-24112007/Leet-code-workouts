/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func sumcheck(sum int, node *TreeNode, ans *[]int, target int) {
    if node == nil {
        return
    }
    sum += node.Val
    if node.Left == nil && node.Right == nil {
        if target == sum {
            *ans = append(*ans, sum);
        }
        return
    }
    if node.Left != nil {
        sumcheck(sum, node.Left, ans, target)
    }
    if node.Right != nil {
        sumcheck(sum, node.Right, ans, target)
    }
}
func hasPathSum(root *TreeNode, targetSum int) bool {
    if root == nil {
        return false
    }
    var ans []int
    sumcheck(0, root, &ans, targetSum)
    return len(ans) > 0
}