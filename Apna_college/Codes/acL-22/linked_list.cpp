#include<iostream>
using namespace std;

/*
//                ________         ________         ________
//               |        |       |        |       |        |
//    Head-----> |1 | next|-----> |2 | next|-----> |3 | next|-----> NULL
//               |________|       |________|       |________|        

*/

// * initialising a node of a linked list
class node {
    public:
        int data; // * first part of the node contains some data
        node* next; // * second part of the node is the pointer to the next node

        node(int val) { // * constructor to initialise the node with a value sets the 'next' pointer to NULL
            data = val; // * first part of the node will contain some value
            next = NULL; // * next part of the node will point to NULL
        }
};

// * inserting an element at the end of a linked list
void insertAtTail(node* &head, int val) {
    node* n = new node(val); // * This line creates a new node n with the given value 'val' using dynamic memory allocation (new). The address of this new node is stored in the pointer n.

    // * if the list is empty
    if (head == NULL) { // * if the head pointer is NULL
        head = n;       // * 'n' becomes the new node and the head pointer is updated to point this new node 'n'
        return;
    }
    else {
    // * if the list is not empty then:
    node* temp = head; // * a temporary pointer 'temp' is initialised to the head
    while (temp->next != NULL) { // * will iterate until the next node is not NULL
        temp = temp->next; // * temp pointer gets updated 
    }
    temp->next = n; // * After the loop, the temp pointer is pointing to the last node in 
                    // * the list. The new node n is then added to the end of the list by setting the next 
                    // * pointer of the last node (temp->next) to point to the new node n. This effectively 
                    // * links the new node at the end of the linked list.
    }
}

// * displaying the modified linked list
void display(node* head) { 
    node* temp = head; // * This line declares a pointer temp and initializes it with 
                       // * the address of the head of the linked list. This temporary pointer is 
                       // * used to traverse the linked list without modifying the original head pointer.
    cout << "Head->";
    while (temp != NULL) {
        cout << temp->data << "->"; // * Inside the loop, this line prints the value of the current node (temp->data) followed by "->". 
                                    // * This represents each element in the linked list.
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);

    return 0;
}