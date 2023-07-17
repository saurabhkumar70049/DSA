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

Node *insertionAtend(Node *head,int data){
    Node* temp = new Node(data);
    if(head == NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;

}

void traversal(Node *head){
   
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    return traversal(head->next);
}

int main() {
    Node *head =  NULL;
    head = insertionAtend(head, 3);
    head = insertionAtend(head, 4);
    head = insertionAtend(head, 5);
    head = insertionAtend(head, 6);

   traversal(head);
}