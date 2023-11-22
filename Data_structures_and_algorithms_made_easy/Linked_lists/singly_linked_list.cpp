// Inserting a node in single linked list

#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode* next; // next node of int datatype acting as a pointer to the next node/data
};

void insert_in_linked_list(ListNode** head, int data, int position) { // ListNode** : a pointer to a pointer to a node 
    int k = 1;
    ListNode *p, *q, *new_node;
    new_node = new ListNode;

    if (!new_node) {
        cerr << "Memory error!" << endl;
        return;
    }

    new_node->data = data;
    p = *head;

    // inserting at the beginning
    if (position == 1) {
        new_node->next = p;
        *head = new_node;
    } else {
        // traverse the list until the position where we want to insert
        while (p != nullptr && k < position) {
            k++;
            q = p;
            p = p->next;
        }

        q->next = new_node; // more optimum way to do this
        new_node->next = p;
    }
}

int main() {
    // Example usage
    ListNode* head = nullptr;

    insert_in_linked_list(&head, 5, 1);  // Insert at the beginning
    insert_in_linked_list(&head, 10, 2); // Insert at position 2

    // Print the linked list
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        cout << endl;
        current = current->next;
    }

    // Deallocate memory (not shown in the original code)
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

/////-----/////


