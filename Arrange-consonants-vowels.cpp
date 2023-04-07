struct Node* arrange(Node *head)
{
   //Code here
   vector<char>vowels,consonants;
   Node *curr=head;
   
   while(curr!=NULL){
       char ch=curr->data;
       if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
           vowels.push_back(ch);
       }
       else{
           consonants.push_back(ch);
       }
       curr=curr->next;
   }
   
   curr=head;
   
   for(int i=0;i<vowels.size();i++){
       curr->data=vowels[i];
       curr=curr->next;
   }
   
   for(int i=0;i<consonants.size();i++){
       curr->data=consonants[i];
       curr=curr->next;
   }
   return head;
}
