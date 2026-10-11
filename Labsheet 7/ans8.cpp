// 8.  Write a C++ program to perform insertion in a Binary Search Tree and display its inorder traversal. 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int x) {
    if (!root)
        return new Node{x, nullptr, nullptr};

    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);

    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);

    cout << "Before insertion: ";
    inorder(root);

    root = insert(root, 40);

    cout << "\nAfter insertion: ";
    inorder(root);

    return 0;
}
