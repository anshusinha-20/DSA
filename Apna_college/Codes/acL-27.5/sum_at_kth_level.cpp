#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            data = val;
            left = NULL;
            right = NULL;
        }
};

void sumAtKthLevel(Node* root, int k) {
    if (root == NULL) {
        return;
    }
    else {
        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        int sum = 0;
        int level = 0;
        
        while (!q.empty()) {
            Node* nd = q.front();
            q.pop();
            if (nd != NULL) {
                // cout << nd->data << " "; 
                if (level == k) {
                    sum+= nd->data;
                }
                if (nd->left != NULL) {
                    q.push(nd->left);
                }           
                if (nd->right != NULL) {
                    q.push(nd->right);
                }   
            }
            else if (!q.empty()) {
                q.push(NULL);
                level++;
            }
        }
        cout << sum << endl;
    }
}

int main() {
    Node* root = new Node(5);

    root->left = new Node(6);
    root->left->left = new Node(9);
    root->left->right = new Node(1);
    root->left->right->left = new Node(2);
    root->left->right->left->left = new Node(3);
    root->left->right->left->right = new Node(5);
    
    root->right = new Node(3);
    root->right->left = new Node(2);
    root->right->right = new Node(1);
    root->right->right->right = new Node(6);
    root->right->right->right->right = new Node(7);

    int k;
    cin >> k;

    sumAtKthLevel(root, k);

    return 0;
}