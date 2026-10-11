// 15.  Write a C++ program to implement a menu-driven Binary Search Tree with the following operations: Insert, 
// Search, Inorder Traversal, Preorder Traversal, Postorder Traversal, Delete, Height, Count Nodes, Exit.

#include <iostream>
#include <algorithm>
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
    else
        cout << "Duplicate value ignored\n";

    return root;
}

bool search(Node* root, int key) {
    if (!root) return false;
    if (root->data == key) return true;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int height(Node* root) {
    if (!root) return 0;

    return 1 + max(height(root->left),
                   height(root->right));
}

int countNodes(Node* root) {
    if (!root) return 0;

    return 1 + countNodes(root->left)
             + countNodes(root->right);
}

Node* minimum(Node* root) {
    while (root->left)
        root = root->left;

    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
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

void clearTree(Node* root) {
    if (!root) return;

    clearTree(root->left);
    clearTree(root->right);
    delete root;
}

int main() {
    Node* root = nullptr;
    int choice, value;

    do {
        cout << "\n\n--- BST MENU ---\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Inorder Traversal\n";
        cout << "4. Preorder Traversal\n";
        cout << "5. Postorder Traversal\n";
        cout << "6. Delete\n";
        cout << "7. Height\n";
        cout << "8. Count Nodes\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                root = insert(root, value);
                break;

            case 2:
                cout << "Enter key to search: ";
                cin >> value;

                if (search(root, value))
                    cout << "Key found\n";
                else
                    cout << "Key not found\n";
                break;

            case 3:
                cout << "Inorder: ";
                inorder(root);
                cout << endl;
                break;

            case 4:
                cout << "Preorder: ";
                preorder(root);
                cout << endl;
                break;

            case 5:
                cout << "Postorder: ";
                postorder(root);
                cout << endl;
                break;

            case 6:
                cout << "Enter value to delete: ";
                cin >> value;

                if (search(root, value)) {
                    root = deleteNode(root, value);
                    cout << "Node deleted\n";
                } else {
                    cout << "Key not found\n";
                }
                break;

            case 7:
                cout << "Height: "
                     << height(root) << endl;
                break;

            case 8:
                cout << "Total nodes: "
                     << countNodes(root) << endl;
                break;

            case 9:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 9);

    clearTree(root);
    return 0;
}
