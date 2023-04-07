// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
int modularNode(Node* head, int k)
{
	int maximum=-1;
	int index=1;
	while(head!=NULL){
	    if(index%k==0){
	        maximum=head->data;
	    }
	    index++;
	    head=head->next;
	}
	return maximum;
}
