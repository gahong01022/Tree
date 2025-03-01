BST 類型題目
先從左邊搜尋
在搜尋右邊
中間可以加入判斷式
EX:
    BST(root->left);
    curr->right = createNewNode(root->val);   
    curr =curr->right;
    root->left = NULL;
    BST(root->right);