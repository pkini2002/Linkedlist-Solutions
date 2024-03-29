class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        vector<int>zeros,ones,twos;
        Node *curr=head;
        while(curr!=NULL){
            if(curr->data==0){
                zeros.push_back(curr->data);
            }
            else if(curr->data==1){
                ones.push_back(curr->data);
            }
            else{
                twos.push_back(curr->data);
            }
            curr=curr->next;
        }
        
        curr=head;
        for(int i=0;i<zeros.size();i++){
            curr->data=zeros[i];
            curr=curr->next;
        }
        
        for(int i=0;i<ones.size();i++){
            curr->data=ones[i];
            curr=curr->next;
        }
        
        for(int i=0;i<twos.size();i++){
            curr->data=twos[i];
            curr=curr->next;
        }
        return head;
    }
};
