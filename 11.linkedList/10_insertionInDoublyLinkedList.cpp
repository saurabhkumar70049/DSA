#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int i){
        data = i;
        next = NULL;
        prev = NULL;
    }
};

Node *insertAtBeginning(Node *head, int data){
    if(head == NULL){
        head = new Node(data);
        return head;
    }
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    return temp;
}

Node *insertionAtEnd(Node *head, int data){

    Node *temp = new Node(data);
    if(head == NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next == NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return temp;
}

void printElement(Node* head){
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    return printElement(head->next);
}

void reversePrinting(Node* tail){
    if(tail == NULL){
        return;
    }
    cout << tail->data << " ";
    return reversePrinting(tail->prev);
}

int main() {
    Node *head = NULL;
    cout << "how many element do you want to enter at beginning : " ;
    int t;
    cin >> t;
    // while(t--){
    //     int data;
    //     cin >> data;
    //     head = insertAtBeginning(head, data);
    // }
    // cout << "Insertion at beginning : ";
    // printElement(head); 


    cout << "how many element do you want to enter at end : " ;
    int x; 
    cin >> x;

    Node *tail = NULL;
    while(x--){
        int data;
        cin >> data;
        tail = insertionAtEnd(head, data);
    }

    reversePrinting(tail);
    

}