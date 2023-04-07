// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
      stack<int>st;
      Node* curr=head;
      while(curr!=NULL){
          st.push(curr->data);
          curr=curr->next;
      }
      int sum=0;
      for(int i=0;i<n;i++){
          int x=st.top();
          sum+=x;
          st.pop();
      }
      return sum;
}
