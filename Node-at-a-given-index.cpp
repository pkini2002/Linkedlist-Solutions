// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
    int count=1;
    struct node* curr=head;
    if(index==1){
        return head->data;
    }
    while(curr!=NULL){
        count++;
        curr=curr->next;
        if(index==count){
            return curr->data;
        }
    }
    return -1;
}
