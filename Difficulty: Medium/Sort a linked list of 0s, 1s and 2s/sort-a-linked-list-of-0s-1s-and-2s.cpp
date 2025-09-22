/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if(head == NULL || head->next == NULL)return head;
        
        Node* zeroHead = new Node(-1);
        Node* oneHead = new Node(-1);
        Node* twoHead = new Node(-1);
         
         
        Node* zero = zeroHead;
        Node* one = oneHead;
        Node* two = twoHead;
        Node* temp = head;
        
        while(temp){
            if(temp->data == 0){
                zero->next = temp;
                zero = temp;
            }
            if(temp->data == 1){
                one->next = temp;
                one = temp;
            }
            if(temp->data == 2){
                two->next = temp;
                two = temp;
            }
            temp = temp->next;
            
        }
        zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
        one->next = twoHead->next;
        two->next = NULL;
        
        head = zeroHead->next;
        delete(zeroHead);
        delete(oneHead);
        delete(twoHead);
        
        return head;
        
    }
};