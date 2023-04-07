//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    // Initial or base condition check
    if(head==NULL && head->next==NULL){
        return 0;
    }
    
    struct Node *slow=head;
    struct Node *fast=head;
  
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        // Detecting if there is a loop in ll
        if(slow==fast){
            int count=1;
            struct Node *ptr=slow;
            
            while(ptr->next!=slow){
                count++;
                ptr=ptr->next;
            }
            return count;
        }
       
    }
    return 0;
}
