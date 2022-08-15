/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/




int reverse(Node **head){
    Node *prev  = NULL;
    Node *curr = *head;
    int len = 0;
    
    while(curr != NULL){
        
        len++;
        Node *ahead = curr->next;
        curr->next = prev;
        prev = curr;
        curr = ahead;
         
    }
    
    *head = prev;
    return len;
}

Node *makeEmptyList(int length)  
{  
    Node *head = NULL; 
    Node *traverse = NULL; 
    
    while (length--){
        
        Node * temp = new Node(0);
        if(head == NULL){
            head = temp;
            traverse = temp;
        }
        else{
            
            traverse->next = temp;
            traverse = traverse->next;
            
        }
    }  
   
    return head;  
}  
   
Node *multiplyLL(Node *head1, Node *head2){
    
  
    int m = reverse(&head1), n = reverse(&head2);  
  
  
    Node *result = makeEmptyList(m + n);  
  
  
    Node *secondPtr = head2, *resultPtr1 = result, *resultPtr2, *firstPtr;  
  
    
    while (secondPtr != NULL) {  
  
        int carry = 0;  
  
        
        resultPtr2 = resultPtr1;  
  
        firstPtr = head1;  
  
        while (firstPtr != NULL) {  
  
           
            int mul = firstPtr->data * secondPtr->data + carry;  
  
           
            resultPtr2->data += mul % 10;  
  
            
            carry = mul / 10 + resultPtr2->data / 10;  
            resultPtr2->data = resultPtr2->data % 10;  
  
            firstPtr = firstPtr->next;  
            resultPtr2 = resultPtr2->next;  
        }  
  
         
        if (carry > 0) {  
            resultPtr2->data += carry;  
        }  
  
        resultPtr1 = resultPtr1->next;  
        secondPtr = secondPtr->next;  
        
    } 
  
    reverse(&result);  
    
    
    while (result->next != NULL && result->data == 0) {  
        Node* temp = result;  
        result = result->next;  
        free(temp);  
    }    
  

    return result;  
    
}

