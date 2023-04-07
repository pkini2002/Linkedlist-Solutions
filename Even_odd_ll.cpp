// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     Node *curr=head;
     int count=0;
     while(curr!=NULL){
         count++;
         curr=curr->next;
     }
     if(count%2==0){
         return false;
     }
     else{
         return true;
     }
}
