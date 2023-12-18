#include<iostream>
using namespace std;

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

void insertAtHead(Node* &head, int val) {
    Node* n = new  Node(val);
    n->next = head;
    if (head != NULL) {
        head->prev = n;
    }
    head = n;
}

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        insertAtHead(head, val);
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

void display(Node* head) {
    Node* temp = head;
    cout << "Head->";
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// * function to find the length of a doubly linked list
int length(Node* head) {
    Node* temp = head;
    int l = 0;
    while (temp != NULL) {
        temp = temp->next;
        l++;
    }

    return l;
}

// * function to append last 'K' nodes
Node* appendK(Node* & head, int k) {
    Node* newHead;
    Node* newTail;
    Node* tail = head;

    int l = length(head);
    k = k%l; // if k is more than the length of the doubly linked list
    int count = 0;
    while (tail->next != NULL) {
        if (count == l-k) {
            newTail = tail;
        }
        if (count == l-k+1) {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }

    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        insertAtTail(head, arr[i]);
    }
    display(head);

    cout << endl;

    Node* newHead = appendK(head, 3);
    display(newHead);

    return 0;
}