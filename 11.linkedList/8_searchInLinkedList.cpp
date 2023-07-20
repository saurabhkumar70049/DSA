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


void printElement(Node *head){
    if(head == NULL){
        return;
    }
    cout << head->data<< " ";
    printElement(head->next);
}


//recursive way


int positionOfElement(Node *head, int ele){   
    if(head == NULL){
        return -1;
    }
    if(head->data == ele){
        return 1;
    }
    else {
        int res =  positionOfElement(head->next, ele);
        if(res == -1){
            return -1;
        }
        else {
            return res+1;
        }
    }
}

//itrative way

// int positionOfElement(Node *head, int ele){
//     int pos = 1;
//     while(head != NULL){
//         if(head->data == ele){
//             return pos;
//         }
//         pos++;
//         head = head->next;
//     }
//     return -1;
// }


int main() {
    Node* head = new Node(12);
    head->next = new Node(18);
    head->next->next = new Node(4);
    head->next->next->next = new Node(8);

    printElement(head);

    cout <<endl<< "enter element : ";
    int x; 
    cin >> x;
    cout << "Element is present at : " <<positionOfElement(head, x);
}