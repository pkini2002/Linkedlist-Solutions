class Solution
{
    public:
    void display(Node *head)
    {
      //your code goes here
      Node *curr=head;
      while(curr!=NULL){
          cout<<curr->data<<" ";
          curr=curr->next;
      }
    }
};
