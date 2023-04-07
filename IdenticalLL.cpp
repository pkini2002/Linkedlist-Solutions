//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2)
{
    if(head1==NULL && head2!=NULL){
        return 0;
    }
    if(head1!=NULL && head2==NULL){
        return 0;
    }
    if(head1==NULL && head2==NULL){
        return 1;
    }
    struct Node* curr1=head1;
    struct Node* curr2=head2;
    while(curr1!=NULL &&  curr2!=NULL){
        if(curr1->data == curr2->data){
            curr1=curr1->next;
            curr2=curr2->next;
        }
        else{
            return 0;
        }
    }
    if(curr1==NULL && curr2==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
