/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
    // Write your code here.
    long long lsum=0;
    if(root==NULL)
    {
        return 0;
    }
    
    if(root->left!=NULL)
    {
        lsum+= root->left->data+ leftSum(root->left);
    }
    lsum+=leftSum(root->right);
    
    return lsum;
}
