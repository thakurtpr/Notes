#include<bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the list
Node* insertAtEnd(Node* head, int data) {
    Node * node = new Node();
    node->data=data;
    node->next=NULL;
    Node* temp = head;
    if(head==nullptr){
        head=node;
        return head;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
    return head;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = nullptr;

    // Insert nodes at the end of the list
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);

    // Print the linked list
    printList(head);

    return 0;
}