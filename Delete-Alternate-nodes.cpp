// Complete this function
void deleteAlt(struct Node *head){
    // Code here
    struct Node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        curr->next=curr->next->next;
        curr=curr->next;
    }
}
