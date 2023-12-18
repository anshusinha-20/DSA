    // * Unbalanced tree
    Node* root = new Node(1);

    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);

    root->right = new Node(6);

    cout << boolalpha << isBalanced(root) << endl;