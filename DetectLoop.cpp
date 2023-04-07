class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
       Node* slow=head;
       Node* fast=head;
       if(head==NULL){
           return false;
       }
       while(fast!=NULL && fast->next!=NULL){
           fast=fast->next->next;
           slow=slow->next;
           if(fast==slow){
               return true;
           }
       }
       return false;
    }
};
