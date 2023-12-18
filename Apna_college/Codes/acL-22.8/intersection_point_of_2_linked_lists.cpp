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

// * function to find length of the linked lists
int length(Node* head) {
    int l = 0; 
    Node* temp = head;

    while(temp != NULL) {
        temp = temp->next;
        l++;
    }
    
    return l;
}

// * function to find the intersection of two linked lists
Node* findIntersection(Node* head1, Node* head2) {
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;

    Node* ptr1;
    Node* ptr2;

    if (l1 > l2) {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else {
        d = l2 - l1;
        ptr2 = head1;
        ptr1 = head2;
    }

    while (d) {
        if (ptr1->next == NULL) {
            return NULL;
        }
        ptr1 = ptr1->next;
        d--;
    }
    while (ptr1->next!= NULL && ptr2->next != NULL) {
        if (ptr1 == ptr2) {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
    return NULL;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < n1; i++) {
        insertAtTail(head1, arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        insertAtTail(head2, arr2[i]);
    }

    display(head1);
    display(head2);

    cout << endl;



    return 0;
}