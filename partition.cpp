

Node*findPartiton(Node*head, int x)
{
  
    Node*start = NULL;
    Node*tail = NULL;

   
    Node*start1 = NULL;
    Node*tail1 = NULL;

    
    while (head != NULL)
    {
        if (head->data < x)
        {    
            if (start == NULL)
            {
                start = tail = head;
            }
            else
            {
                tail->next = head;
                tail = head;
            }
        }
        else
        {
            if (start1 == NULL)
            {
                start1 = tail1 = head;
            }
            else
            {
                tail1->next = head;
                tail1 = head;
            }

        }
        head = head->next;

    }
  
    if (tail1 != NULL)
        tail1->next = NULL;
   
    if (tail != NULL)
        tail->next = start1;

    return (start == NULL ? start1 : start);


}
