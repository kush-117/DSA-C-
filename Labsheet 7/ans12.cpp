// 12.  Write a C++ program to calculate the height of a Binary Tree. 

#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int height(Node* root) {
    if (root == nullptr)
        return 0;

    return 1 + max(height(root->left),
                   height(root->right));
}

int main() {
    Node* root = new Node{1, nullptr, nullptr};
    root->left = new Node{2, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    root->left->left = new Node{4, nullptr, nullptr};
    root->left->right = new Node{5, nullptr, nullptr};

    cout << "Height of Binary Tree: "
         << height(root);

    return 0;
}
