#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int i){
        data = i;
        next = NULL;
    }
};


void printElement(Node* head){
    if(head == NULL){
        return;
    }
    if(head->next != NULL){
        cout << head->data << " -> ";
    }
    else {
        cout << head->data <<endl;
    }
    return printElement(head->next);
}

Node *deleteElementAtBiginning(Node* head){
    if(head == NULL){
        return NULL;
    }
    else {
        Node* temp = head->next;
        delete head;
        return temp;
    }
    
}

int main() {

    //create Linkedlist

    Node* head = new Node(4);
    head->next = new Node(10);
    head->next->next = new Node(8);
    head->next->next->next = new Node(3);
    cout << head->data << endl;

    printElement(head);

    head = deleteElementAtBiginning(head);

    printElement(head);
}