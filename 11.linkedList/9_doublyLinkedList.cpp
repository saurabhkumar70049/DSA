#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int i){
        data = i;
        prev = NULL;
        next = NULL;
    }
};


int main(){
    // 2 -> <- 10

    Node *head = new Node(2);
    head->next = new Node(10);
    head->next->prev = head;
    head->next->next = new Node(13);
    head->next->next->prev = head->next;


    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }

}