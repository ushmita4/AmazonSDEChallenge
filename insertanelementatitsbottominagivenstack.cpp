
stack<int> pushAtBottom(stack<int> &myStack, int x)
{

    if (myStack.empty())
    {
        myStack.push(x);
        return myStack;
    }

    
    int num = myStack.top();

    
    myStack.pop();

    
    pushAtBottom(myStack, x);

    
    myStack.push(num);

    return myStack;
}
