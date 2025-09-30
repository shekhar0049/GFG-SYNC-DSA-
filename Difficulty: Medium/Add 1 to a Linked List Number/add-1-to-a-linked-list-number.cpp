/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    Node* reverse(Node* head){
        if(head == NULL || head->next == NULL)return head;
        Node* temp = head;
        Node* prev = nullptr;
        
        while(temp != NULL){
            Node* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
  public:
    Node* addOne(Node* head) {
        // Your Code here
       int carry = 1;
       head = reverse(head);
       Node* temp = head;
       while(temp != NULL){
           int sum = temp->data + carry;
           temp->data = sum % 10;
           carry = sum / 10;
           if(carry == 0){
               head = reverse(head);
               return head;
           }
           temp = temp->next;
       }
       if(carry == 1){
           Node* newNode = new Node(1);
           head = reverse(head);
           newNode->next = head;
           return newNode;
       }
       head = reverse(head);
       return head;
        
        
        // return head of list after adding one
    }
};