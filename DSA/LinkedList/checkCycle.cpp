#include<bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to detect whether a linked list has a cycle
bool hasCycle(Node* head) {
    // Your implementation goes here
    
}

// Main function
int main() {
    Node* head = nullptr;

    // Create a linked list with a cycle
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);

    // Create a cycle
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head->next; // Create a cycle

    // Check for cycle
    if (hasCycle(head)) {
        cout << "List has a cycle" << endl;
    } else {
        cout << "List does not have a cycle" << endl;
    }

    return 0;
}