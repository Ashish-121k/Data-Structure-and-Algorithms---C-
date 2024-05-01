class Solution
{
    public:
    
    Node* reverse(Node* &head){
       Node* curr = head;
       Node* prev = NULL;
       
       while(curr != NULL){
           Node* newNode = curr->next;
           curr->next = prev;
           prev = curr;
           curr = newNode;
       }
       return prev;
    }
    
    Node* addOne(Node* head) 
    {
       Node* reversedList = reverse(head);
       
       int carry = 1;
       Node* temp = reversedList;
       
       while(temp->next != NULL){
           
           int totalsum = temp->data + carry ;
           int digit = totalsum % 10;
           carry = totalsum/10;
           temp->data = digit;
           temp = temp->next;
           if(carry == 0){
               break;
           }
          
        }
        if(carry != 0){
           int totalsum = temp->data + carry ;
           int digit = totalsum % 10;
           carry = totalsum/10;
           temp->data = digit;
           
           if(carry != 0){
                Node* newNode = new Node(carry);
                temp->next = newNode;  
           }
          
       }
       return reverse(reversedList);

    }
};