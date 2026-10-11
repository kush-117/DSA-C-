// 7.  Write a C++ program to perform searching in a Binary Search Tree for a given key. 

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

bool search(Node* root, int key) {
    if (!root) return false;
    if (root->data == key) return true;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

int main() {
    Node* root = nullptr;
    int a[] = {50, 30, 70, 20, 40};

    for (int x : a)
        root = insert(root, x);

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    if (search(root, key))
        cout << "Key found";
    else
        cout << "Key not found";

    return 0;
}
