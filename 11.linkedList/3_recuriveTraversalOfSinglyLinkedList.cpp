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


void traverseRecursively(Node *head){
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    return traverseRecursively(head->next);
}


int main(){

    int n, num;
    cin >> n;


    cin >> num;
    Node *head, *tail;

    head = tail = new Node(num);

    for(int i = 0; i < n-1; i++){
        cin >> num;
        tail->next = new Node(num);
        tail = tail->next;
    }

    traverseRecursively(head);

}