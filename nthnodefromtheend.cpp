Node* nthNodeFromEnd(Node* head, int n)
{
    Node *slow = head, *fast = head;

    
    for(int i=1;i<n;i++)
    {
        fast = fast->next;
    }

    
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}
