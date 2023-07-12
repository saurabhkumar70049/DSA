#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int i){
        data = i;
        next = NULL;
    }  
};


int main(){
    // node *temp = new node(10);
    // node *temp1 = new node(20);
    // node *temp2 = new node(30);
    // temp->next = temp1;
    // temp1->next = temp2;

    node *temp = new node(10);
    temp->next = new node(20);
    temp->next->next = new node(30); // Could also implement above operation like that
    while(temp != NULL){
        cout << temp->data <<endl;
        temp = temp->next;
    }
}