#include<iostream>
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

int heightBt(Node* root) { // * Time complexity: O(n)
    if (root == NULL) {
        return 0;
    }
    int leftHeight = heightBt(root->left);
    int rightHeight = heightBt(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int diameterBt(Node* root) { // * Time complexity: O(n^2)
    if (root == NULL) {
        return 0;
    }
    int leftHeight = heightBt(root->left);
    int rightHeight = heightBt(root->right);
    int currDiameter = leftHeight + rightHeight + 1;

    int leftDiameter = diameterBt(root->left);
    int rightDiameter = diameterBt(root->right);
    return max(currDiameter, max(leftDiameter, rightDiameter));
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // cout << heightBt(root) << endl;
    cout << diameterBt(root) << endl;

    return 0;
}