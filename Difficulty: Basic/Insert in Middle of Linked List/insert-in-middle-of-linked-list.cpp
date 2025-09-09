/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    int size(Node* head){
        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        return count;
    }
    Node *insertInMiddle(Node *head, int x) {
        if(head == NULL){
            Node* add = new Node(x);
            add->next = NULL;
            return add;
        }
        
        int n = size(head);
        int mid = (n%2 == 0) ? (n/2) : ((n+1)/2);
        int cnt  = 0;
        Node* temp = head;
        
        while(temp){
            cnt++;
            if(cnt == mid){
                Node* add = new Node(x);
                add->next = temp->next;
                temp->next = add;
                break;
            }
            temp = temp->next;
        }
        
        return head;
    }
};