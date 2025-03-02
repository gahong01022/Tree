# Tree
For tree problem

三種 Iterative Binary Tree Traversal 的方法 (Inorder, Preorder, Postorder)

        4
       / \
      2   6
     / \ / \
    1  3 5  7

則三種遍歷的順序依序為：

前序 (preorder): 中 -> 左 -> 右，4213657

中序 (inorder): 左 -> 中 -> 右，1234567。注意：對二元搜尋樹 (binary search tree, BST) 做 inorder traversal 就是由小到大依序遍歷。

後序 (postorder): 左 -> 右 -> 中，1325764


for symmetry tree，帶入兩個treenode進入recursive

bool checksym(struct TreeNode* left, struct TreeNode* right);
