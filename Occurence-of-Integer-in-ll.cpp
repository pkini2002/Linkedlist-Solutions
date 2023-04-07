class Solution
{
    public:
    int count(struct node* head, int search_for)
    {
    //add your code here
        struct node* curr=head;
        int count=0;
        while(curr!=NULL){
            if(curr->data==search_for){
                count++;
            }
            curr=curr->next;
        }
        return count;
    }
};
