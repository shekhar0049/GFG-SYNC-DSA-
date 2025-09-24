/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        stack<int> st;
        Node*temp = head;
        
        while(temp != NULL){
            st.push(temp->data);
            temp = temp->next;
        }
        
        temp = head;
        
        while(temp != NULL){
            temp->data = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;
    }
};