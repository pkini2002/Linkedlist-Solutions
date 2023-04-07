// Move Zeros to the front of the list
void moveZeroes(struct Node **head)
{
    //Your code here
    vector<int>zeros,others;
    Node *temp=*head;
    while(temp!=NULL){
        if(temp->data==0){
            zeros.push_back(temp->data);
        }
        else{
            others.push_back(temp->data);
        }
        temp=temp->next;
    }
    
    temp=*head;
    for(int i=0;i<zeros.size();i++){
        temp->data=zeros[i];
        temp=temp->next;
    }
    
    for(int i=0;i<others.size();i++){
        temp->data=others[i];
        temp=temp->next;
    }
}
