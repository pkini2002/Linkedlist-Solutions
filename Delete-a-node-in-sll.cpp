/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
     //Your code here
   Node *curr=head;
   Node *prev=NULL;
   int count=1;
   
   if(x==1){
       return curr->next;
   }
   else{
       while(curr!=NULL){
           count++;
           prev=curr;
           curr=curr->next;
           if(count==x){
               prev->next=curr->next;
               delete curr;
           }
       }
   }
   return head;
}
