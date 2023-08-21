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
        
    }
    
}

Node *deleteElementAtAnyPlace(Node* head, int pos){
    if(pos == 1){
        Node* temp = head->next;
        delete head;
        return temp;
    }
    int count = 1;
    Node* curr = head;
    while(count != pos-1 && curr->next != NULL){
        curr = curr->next;
        count++;
    }
    if(curr->next == NULL){
        cout << "position don't exist" <<endl;
        return head;
    }

    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;

}

int main() {

    //create Linkedlist

    Node* head = new Node(4);
    head->next = new Node(10);
    head->next->next = new Node(8);
    head->next->next->next = new Node(3);
    cout << head->data << endl;

    printElement(head);

    cout << "Enter Position of element : " ;
    int pos;
    cin >> pos;

    head = deleteElementAtAnyPlace(head, pos);

    printElement(head);
}


