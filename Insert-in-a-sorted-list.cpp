class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        struct Node* temp=new Node(data);
        struct Node* curr=head;
        struct Node* prev=NULL;
        
        while(curr!=NULL){
            if(curr->data < data){
                prev=curr;
                curr=curr->next;
            }
            else{
                break;
            }
        }
        // Inserting before head ie; 1 st ele of ll
        if(prev==NULL){
            temp->next=curr;
            curr=temp;
            return curr;
        }
        
        temp->next=curr;
        prev->next=temp;
        return head;
    }
};
