// 13.  Write a C++ program to count the total number of nodes in a Binary Tree. 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int countNodes(Node* root) {
    if (root == nullptr)
        return 0;

    return 1 + countNodes(root->left)
             + countNodes(root->right);
}

int main() {
    Node* root = new Node{1, nullptr, nullptr};
    root->left = new Node{2, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    root->left->left = new Node{4, nullptr, nullptr};
    root->left->right = new Node{5, nullptr, nullptr};

    cout << "Total number of nodes: "
         << countNodes(root);

    return 0;
}
