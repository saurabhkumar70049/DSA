#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int i){
        data = i;
        next = NULL;
    }
};

void traversal(Node *head){
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    return traversal(head->next);
}

Node *valueInsertBegging(int valueInsert, Node *head){
    Node *temp = new Node(valueInsert);
    temp->next = head;
    return temp;
}


int main(){
    int n;
    cin >> n;
    Node *head , *tail;
    int value;
    cin >> value;
    head = tail = new Node(value);
    for(int i = 0; i < n-1; i++){
        cin >> value;
       
        tail->next = new Node(value);
        tail = tail->next;
    }
    traversal(head);

    cout << "enter a value which want to insert at first position : ";
    int valueInsert;
    cin >> valueInsert;

    head = valueInsertBegging(valueInsert, head);

    // Node *temp = head;
    // head = new Node(valueInsert);
    // head->next = temp;

    traversal(head);


}