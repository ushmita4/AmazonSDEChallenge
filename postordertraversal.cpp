

#include <bits/stdc++.h>


vector<int> postorderTraversal(TreeNode* root)
{
    
    stack<TreeNode*> nodeStack;

    
    vector<int> ans;

    nodeStack.push(root);

    while (nodeStack.size() > 0)
    {
       
        TreeNode* cur = nodeStack.top();
        nodeStack.pop();

        
        ans.push_back(cur->val);

        
        if(cur->left != NULL)
        {
            nodeStack.push(cur->left);
        }

        
        if(cur->right != NULL)
        {
            nodeStack.push(cur->right);
        }
    }

   
    reverse(ans.begin(), ans.end());
    return ans;
}



