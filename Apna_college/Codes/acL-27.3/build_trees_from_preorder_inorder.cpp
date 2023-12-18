#include<iostream>
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

int searchInorder(int inorder[], int start, int end, int currEl) {
    for (int i = 0; i <= end; i++) {
        if (currEl == inorder[i]) {
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end) {
    if (start > end) {
        return NULL;
    }
    static int idx = 0; // ! the value of idx should persist through all recursive calls
    int currEl = preorder[idx];
    idx++;
    int pos = searchInorder(inorder, start, end, currEl);
    
    Node* nd = new Node(currEl);


    if (start == end) {
        return nd;
    }
    else {
    nd->left = buildTree(preorder, inorder, start, pos-1);
    nd->right = buildTree(preorder, inorder, pos+1, end);
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
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    int n = sizeof(preorder)/sizeof(preorder[0]);

    Node* root = buildTree(preorder, inorder, 0, n-1);
    inorderTraversal(root);
    cout << endl;

    return 0;
}