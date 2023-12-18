#include<iostream>
using namespace std;

/*
//                                      Original
//                ________         ________         ________
//               |        |       |        |       |        |
//    Head-----> |1 | next|-----> |2 | next|-----> |3 | next|-----> NULL
//               |________|       |________|       |________|        

*/

/*
//                                      Reversed
//                ________         ________         ________
//               |        |       |        |       |        |
//    Head-----> |3 | next|-----> |2 | next|-----> |1 | next|-----> NULL
//               |________|       |________|       |________|        

*/

class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = NULL;
        }
};

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        head = n;
        return ;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void display(Node* head) {
    Node* temp = head;
    
    cout << "Head->";
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// * reversing a linked list - iterative 
Node* reverseIterative(Node* &head) { // * Time complexity: O(n)
    Node* prevPtr = NULL;
    Node* currPtr = head;
    Node* nextPtr;

    while (currPtr != NULL) {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    return prevPtr; // * prevPtr is the new head
}

Node* reverseRecursive(Node* & head) { // * Time complexity: O(n)
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* newHead2 = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead2;
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    cout << endl;

    Node* newHead1 = reverseIterative(head);
    display(newHead1);

    cout << endl;
    
    head = newHead1;
    Node* newHead2 = reverseRecursive(head);
    display(newHead2);

    return 0;
}