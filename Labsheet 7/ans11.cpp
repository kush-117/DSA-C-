// 11.  Write a C++ program to delete a node having two children from a Binary Search Tree using the inorder 
// successor. 

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

Node* minimum(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* successor = minimum(root->right);
        root->data = successor->data;
        root->right = deleteNode(root->right,
                                 successor->data);
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
    int a[] = {50, 30, 70, 20, 40, 60, 80};

    for (int x : a)
        root = insert(root, x);

    cout << "Before deletion: ";
    inorder(root);

    root = deleteNode(root, 50);

    cout << "\nAfter deleting 50: ";
    inorder(root);

    return 0;
}
