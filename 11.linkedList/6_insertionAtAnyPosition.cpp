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

Node *insertAtEnd(Node* head, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        return temp;
    }
    Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node* insertAtAnyPosition(Node* head, int pos, int data){
    Node *temp = new Node(data);
    if(pos == 1){
        temp->next = head;
        head = temp;
        return head;
    }
    int count = 0;
    Node *curr = head;
    while(count != pos-2 && curr != NULL){
        count++;
        curr = curr->next;
    }
    if(curr == NULL){
        cout << "This position is not exist ";
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

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

int main() {
    int n;
    cin >> n;
    Node* head = NULL;
    while(n--){
        int data;
        cin >> data;
        head = insertAtEnd(head, data);
    }
    printElement(head);

    cout << "Enter the Element and position where you want to insert the element : ";
    int pos, data;
    cin >> data >> pos;

    head = insertAtAnyPosition(head, pos, data); 

    printElement(head);
}
