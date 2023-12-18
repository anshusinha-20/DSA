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

int searchInoder(int inorder[], int start, int end, int currEl) {
    for (int i = 0; i <= end; i++) {
        if (currEl == inorder[i]) {
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[], int inorder[], int start, int end) {
    if (start > end) {
        return NULL;
    }

    static int idx = end;
    int currEl = postorder[idx];
    idx--;
    int pos = searchInoder(inorder, start, end, currEl);

    Node* nd = new Node(currEl);

    if (start == end) {
        return nd;
    }
    else {
        nd->right = buildTree(postorder, inorder, pos+1, end);
        nd->left = buildTree(postorder, inorder, start, pos-1);
        return nd;
    }
}

void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    int postorder[] = {4, 5, 2, 6, 7, 3, 1};
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};

    int n = sizeof(postorder)/sizeof(postorder[0]);

    Node* root = buildTree(postorder, inorder, 0, n-1);
    inorderTraversal(root);
    cout << endl;

    return 0;
}