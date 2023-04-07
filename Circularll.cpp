bool isCircular(Node *head)
{
   Node *curr=head;
   if(head==NULL){
       return true;
   }
   while(curr!=NULL){
    if(curr->next==head){
       return true;
    }
       curr=curr->next;
   }
   return false;
}
