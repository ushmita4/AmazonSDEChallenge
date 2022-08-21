/****************************************************

    Following is the class structure of the Node class:

    class Node {
    public:
	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
}

*****************************************************/



Node* sortLL(Node* head) 
{
   
    Node *zeroCheck = new Node(0);
    Node *oneCheck = new Node(0);
    Node *twoCheck = new Node(0);

   
    Node *zeroPointer = zeroCheck; 
    Node *onePointer = oneCheck; 
    Node *twoPointer = twoCheck;
    Node *temp = head;
    
    
    while(temp != NULL) 
    {
        if(temp->data == 0) 
        {
            zeroPointer->next = temp;
            zeroPointer = zeroPointer->next;
        }
        else if(temp->data == 1) 
        {
            onePointer->next = temp;
            onePointer = onePointer->next;
        }
        else 
        {
            twoPointer->next = temp;
            twoPointer = twoPointer->next;
        }
        
        // Move temp to the next node
        temp = temp->next;
    }

    // Attach the three lists.
    if(oneCheck->next != NULL) 
    {
        zeroPointer->next = oneCheck->next;
    } 
    else 
    {
        zeroPointer->next = twoCheck->next;
    }

    onePointer->next = twoCheck->next;
    twoPointer->next = NULL;

    // Updated head
    head = zeroCheck->next;
    return head;
}

