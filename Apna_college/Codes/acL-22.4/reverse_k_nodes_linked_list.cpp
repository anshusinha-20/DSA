#include<iostream>
using namespace std;

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
        return;
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

Node* reverseKNodes(Node* &head, int k) {
    Node* prevPtr = NULL;
    Node* currPtr = head;
    Node* nextPtr;

    int count = 0;
    while (currPtr != NULL && count < k) {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
        count++;
    }

    if (nextPtr != NULL) {
        head->next = reverseKNodes(nextPtr, k);
    }

    return prevPtr;
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);

    Node* newHead = reverseKNodes(head, 2);
    display(newHead);

    return 0;
}