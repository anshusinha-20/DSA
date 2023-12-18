#include<iostream>
using namespace std;

/*
//                ________         ________         ________
//               |        |       |        |       |        |
//    NULL <-----|1 | next|-----> |2 | next|-----> |3 | next|-----> NULL
//               |________| <-----|________| <-----|________|        
//                    ^
//                    |
//                   Head
*/

// * initialising doubly linked list
class Node {
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val) {
            data = val;
            next = NULL;
            prev = NULL;
        }
};

// * inserting a node at the head of the doubly linked list
void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val); // create a new node 'n' with the given value

    n->next = head; // set the next pointer the new node to the current head
    if (head != NULL) {
        head->prev = n; // if the previous pointer of the current head is not null, set the previous pointer of the current head to the new node 'n'
    }
    head = n; // update the new node 'n' as the head
}

// * inserting a node at the tail of a doubly linked list
void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
}

// * displaying the doubly linked list
void display(Node* head) {
    Node* temp = head;
    
    cout << "Head->";
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// * deleting a node at the head of a doubly linked list
void deletionAtHead(Node* &head) {
    Node* toDelete = head;
    head = head->next;
    head->prev = NULL;

    delete toDelete;
}

// * deletion in a doubly linked list
void deletion(Node* & head, int pos) {
    if (pos == 1) {
        deletionAtHead(head);
        return;
    }
    else {
        Node* temp = head;
        int count = 0;
        while (temp != NULL && count < pos) {
            temp = temp->next;
            count++;
        }

        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        temp->prev->next = temp->next;

        delete temp;
    }
}

int main() {    
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);

    cout << endl;
    
    insertAtHead(head, 5);
    display(head);

    cout << endl;

    deletion(head, 3);
    display(head);

    cout << endl;

    deletion(head, 1);
    display(head);

    return 0;
}