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

// * deleting the first node
void deleteAtHead(Node* &head) {
    Node* toDelete = head;
    head = head->next;
    delete toDelete; // * Deallocate memory for the node being deleted
}

// * deletion in a linked list
void deletion(Node* head, int val) {
    if (head == NULL) { // * if the linked list is empty
        return;
    }
    if (head->next == NULL) { // * if only single node is present in the linked list
        deleteAtHead(head);
        return;
    }
    else {
        Node* temp = head;
        while (temp->next->data != val) {
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete; // * Deallocate memory for the node being deleted
    }
}


int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    deletion(head, 3);
    display(head);

    deleteAtHead(head);
    display(head);

    return 0;
}