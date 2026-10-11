// 14.  Write a C++ program to count the number of leaf nodes in a Binary Tree. 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int countLeaves(Node* root) {
    if (root == nullptr)
        return 0;

    if (root->left == nullptr &&
        root->right == nullptr)
        return 1;

    return countLeaves(root->left)
         + countLeaves(root->right);
}

int main() {
    Node* root = new Node{1, nullptr, nullptr};
    root->left = new Node{2, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    root->left->left = new Node{4, nullptr, nullptr};
    root->left->right = new Node{5, nullptr, nullptr};

    cout << "Number of leaf nodes: "
         << countLeaves(root);

    return 0;
}
