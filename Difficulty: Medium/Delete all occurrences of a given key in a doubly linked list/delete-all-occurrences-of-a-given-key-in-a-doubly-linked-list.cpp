// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node* temp = *head_ref;
        
        while(temp != NULL){
            if(temp->data == x){
                Node* front = temp->next;
                Node* prev = temp->prev;
                
                if(temp == *head_ref){
                    *head_ref = front;
                }
                
                if(front)front->prev = prev;
                if(prev)prev->next = front;
                
                delete temp;
                temp = front;
            }
            else{
               temp = temp->next;
            }
        }
        
    }
};