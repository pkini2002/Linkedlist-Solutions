//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *curr=head;
      int count=0;
      while(curr!=NULL){
          count++;
          curr=curr->next;
      }
      
      if(n>count){
          return -1;
      }
      
      curr=head;
      
      for(int i=0;i<(count-n);i++){
          curr=curr->next;
      }
      return curr->data;
}
