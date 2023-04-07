//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    Node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data == curr->next->data){
            curr->next=curr->next->next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
