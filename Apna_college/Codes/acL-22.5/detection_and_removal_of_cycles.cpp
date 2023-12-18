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

// * function to detect cycle in a linked list
bool detectCycle(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow) {
            return true;
        }
    }
    return false;
}

// * function to create cycle in a linked list
void createCycle(Node* &head, int pos) {
    Node* start = head;
    Node* end = head;

    while (end->next != NULL) {
        end = end->next;
    }

    for (int i = 0; i < pos; i++) {
        start = start->next;
    }

    end->next = start;
}

// * function to remove cycle from a linked list
void removeCycle(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    do {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    display(head);

    createCycle(head, 4);
    cout << boolalpha << detectCycle(head) << endl;
    // display(head);

    cout << endl;

    removeCycle(head);
    display(head);
    cout << boolalpha << detectCycle(head) << endl;

    return 0;
}