// // * Brute-approach: Time complexity: O(n^2)

// #include<iostream>
// using namespace std;

// class Node {
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int val) {
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// int heightBt(Node* root) {
//     if (root == NULL) {
//         return -1;
//     }
//     int leftHeight = heightBt(root->left);
//     int rightHeight = heightBt(root->right);
//     return max(leftHeight, rightHeight) + 1;
// }

// bool isBalanced(Node* root) {
//     if (root == NULL) {
//         return true;
//     }
    
//     if (isBalanced(root->left) == false) {
//         return false;
//     }
//     if (isBalanced(root->right) == false) {
//         return false;
//     }

//     int leftHeight = heightBt(root->left);
//     int rightHeight = heightBt(root->right);

//     if (abs(leftHeight-rightHeight) <= 1) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// int main() {
//     // * Balanced tree
//     Node* root = new Node(1);

//     root->left = new Node(2);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     root->right = new Node(3);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << boolalpha << isBalanced(root) << endl;

//     // * Unbalanced tree
//     Node* root = new Node(1);

//     root->left = new Node(2);
//     root->left->left = new Node(3);
//     root->left->right = new Node(4);
//     root->left->right->left = new Node(5);

//     root->right = new Node(6);

//     cout << boolalpha << isBalanced(root) << endl;

//     return 0;
// }

/////-----/////

// * Optimized approach: O(n)

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

bool checkHeightAndBalance(Node* root, int &height) {
    if (root == NULL) {
        height = 0;
        return true;
    }

    int leftHeight = 0, rightHeight = 0;
    bool leftBalanced = checkHeightAndBalance(root->left, leftHeight);
    bool rightBalanced = checkHeightAndBalance(root->right, rightHeight);

    height = max(leftHeight, rightHeight) + 1;

    if (!leftBalanced || !rightBalanced || abs(leftHeight - rightHeight) > 1) {
        return false;
    }
    return true;
}

int main() {
    // * Balanced tree
    Node* root = new Node(1);

    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int height = 0;

    cout << boolalpha << checkHeightAndBalance(root, height) << endl;

    // // * Unbalanced tree
    // Node* root = new Node(1);

    // root->left = new Node(2);
    // root->left->left = new Node(3);
    // root->left->right = new Node(4);
    // root->left->right->left = new Node(5);

    // root->right = new Node(6);


    // int height = 0;

    // cout << boolalpha << checkHeightAndBalance(root, height) << endl;

    return 0;
}