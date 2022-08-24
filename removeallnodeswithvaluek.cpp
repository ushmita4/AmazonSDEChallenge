/****************************************************************
    Following is the Linked List node structure

    class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

/*
    Time Complexity: O(N)
    Space complexity: O(1)

    Where 'N' is the number of nodes in the linked list.
*/

Node * removeNodes(Node * head, int k) {
    Node * newHead = head;

    
    while (newHead && (newHead -> data) == k) {
        newHead = newHead -> next;
    }

   
    if (newHead == NULL) {
        return newHead;
    }

    Node * tail = newHead;
    Node * curr = newHead -> next;

   
    while (curr) {
       
        if ((curr -> data) != k) {
            tail -> next = curr;
            tail = tail -> next;
        }

        curr = curr -> next;
    }

    
    tail -> next = NULL;

    return newHead;

}
