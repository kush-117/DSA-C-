// program to insert in linklist
#include <iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    node* head = nullptr;
    node *tail = nullptr;
    node *temp = nullptr;
    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(4);

    first->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    first->next = second;
    second->next = third;
    third->next = fourth;
    head = first;
    
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    
    return 0;
}