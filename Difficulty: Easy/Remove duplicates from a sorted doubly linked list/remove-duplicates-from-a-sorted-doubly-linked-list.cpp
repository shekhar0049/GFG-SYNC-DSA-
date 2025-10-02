/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        Node* temp = head;
        while(temp->next != NULL){
            if(temp->data == temp->next->data){
                if(temp == head){
                    head = head->next;
                }
                Node* prev = temp->prev;
                Node* front = temp->next;
                
                if(prev)prev->next = front;
                if(front)front->prev = prev;
                
                delete temp;
                temp = front;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};