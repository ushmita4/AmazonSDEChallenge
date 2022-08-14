

bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{

    
    if (root == NULL)
    {
        return true;
    }

  
    queue<BinaryTreeNode<int>* > q;
    
  
    q.push(root);
    
    while (!q.empty())
    {
        
        
        BinaryTreeNode<int>* cur = q.front();
        q.pop();
        
        
        if (cur -> left == NULL && cur -> right == NULL)
        {
            continue;
        }

        
        if (cur -> left == NULL || cur -> right == NULL)
        {
            return false;
        }

        
        q.push(cur->left);
        
         
        q.push(cur->right);
    }

    return true;
}
