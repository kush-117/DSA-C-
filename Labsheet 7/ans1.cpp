// 1. Write a C++ program to create a Binary Tree using dynamically allocated nodes and display its structure. 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

void display(Node* root, int space = 0) {
    if (root == nullptr)
        return;

    space += 5;

    display(root->right, space);

    cout << endl;
    for (int i = 5; i < space; i++)
        cout << " ";

    cout << root->data << endl;

    display(root->left, space);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Binary Tree Structure:\n";
    display(root);

    return 0;
}
