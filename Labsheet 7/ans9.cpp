// 9.  Write a C++ program to delete a leaf node from a Binary Search Tree. 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int x) {
    if (!root) return new Node{x, nullptr, nullptr};
    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else if (!root->left && !root->right) {
        delete root;
        return nullptr;
    }

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
    int a[] = {50, 30, 70, 20, 40};

    for (int x : a)
        root = insert(root, x);

    cout << "Before deletion: ";
    inorder(root);

    root = deleteNode(root, 20);

    cout << "\nAfter deleting leaf 20: ";
    inorder(root);

    return 0;
}
