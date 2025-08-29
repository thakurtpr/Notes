#include<bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to reverse a singly linked list
Node* reverseList(Node* head) {
    // Your implementation goes here

    if ( head == nullptr || head->next==nullptr){
        return head ;
    }
    Node* prev = NULL ;
    Node* current = head ;
    Node* next =NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}

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

    // Print the original list
    cout << "Original List: ";
    printList(head);

    // Reverse the list
    head = reverseList(head);

    // Print the reversed list
    cout << "Reversed List: ";
    printList(head);

    return 0;
}