int fractional_node(struct Node *head, int k)
{
    // your code here
    struct Node *curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    
    int fraction=(count%k==0)?count/k:count/k+1;
    
    curr=head;
    for(int i=1;i<fraction;i++){
        curr=curr->next;
    }
    return curr->data;
}
