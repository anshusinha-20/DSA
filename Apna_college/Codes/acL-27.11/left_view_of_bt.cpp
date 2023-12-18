#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node (int val) {
            data = val;
            left = NULL;
            right = NULL;
        }
};

void leftView(Node* root) {
    if (root == NULL) {
        return;
    }
    else {
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                Node* nd = q.front();
                q.pop();
                if (i == 0) {
                    cout << nd->data << " ";
                }
                if(nd->left != NULL) {
                    q.push(nd->left);
                }
                if(nd->right != NULL) {
                    q.push(nd->right);
                }
            }   
        }
        cout << endl;
    }
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    leftView(root);

    return 0;
}