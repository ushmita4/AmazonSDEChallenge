/***************************************************
  Following is the TreeNode Structure

template <typename T>
class TreeNode {
   public:
    T val;
    TreeNode<T>* left;
    TreeNode<T>* right;

    TreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

*****************************************************/
#include<bits/stdc++.h>
string inorder(TreeNode<int> *node){
    if(node==NULL)
        return "NULL";
    
    return inorder(node->left)+" "+to_string(node->val)+" "+inorder(node->right);
}
string postorder(TreeNode<int> *node){
    if(node==NULL)
        return "NULL";
    
    return postorder(node->left)+" "+postorder(node->right)+" "+ to_string(node->val);
}

bool isSubtree(TreeNode<int> *T, TreeNode<int> *S)
{
    // Write your code here.
    if(T==S)
        return true;
    if(T==NULL && S!=NULL)
        return false;
    
    string Tin = inorder(T);
    string Sin = inorder(S);
    
      if (Tin.find(Sin) == string::npos) {
      return false;
    }
    string Tpost = postorder(T);
    string Spost = postorder(S);
    
    if (Tpost.find(Spost) == string::npos) {
      return false;
    }
    
    return true;
    
}
