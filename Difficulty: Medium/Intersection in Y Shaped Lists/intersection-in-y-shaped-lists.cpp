/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        if(head1 == NULL || head2 == NULL)return NULL;
        
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
            
            if(temp1 == temp2)return temp1;
            
            if(temp1->next == NULL)temp1 = head2;
            if(temp2->next == NULL)temp2 = head1;
        }
        return head1;
        
    }
};