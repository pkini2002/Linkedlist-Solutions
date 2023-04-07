class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
        int count=0;
        Node *curr=head_ref;
        while(curr!=NULL){
            count++;
            if(count==x){
            // Deleting 1st node of linkedlist
            if(curr->prev==NULL){
                head_ref=curr->next; // 2nd node will be the head of ll
                curr->prev=NULL;
            }
            // Deleting last node of ll
            else if(curr->next == NULL){
                curr->prev->next=NULL; // pointing last but one node to null
            }
            // Deleting any intermediary nodes
            else{
                curr->next->prev=curr->prev;
                curr->prev->next=curr->next;
            }
            delete curr;
            return head_ref;
        }
        curr=curr->next;
    }
    }
};
