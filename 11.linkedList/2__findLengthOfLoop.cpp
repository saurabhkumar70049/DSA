//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}



//Function to find the length of a loop in the linked list.
// int countNodesinLoop(struct Node *head)  //time complexity = O(n) and Auxilary Space = O(n);
// {
//     // Code here
//     int count = 0; 
//     unordered_map<Node*, int> visit;
//     while(head != NULL){
//         if(visit.find(head) !=visit.end()){
//             return count-visit[head]+1;
//         }
//         count++;
//         visit[head] = count;
//         head= head->next;
//     }
//     return 0;
// }


int countNodesinLoop(struct Node *head) // time complexity = O(n) and Auxilary Space = O(1)
{
    // Code here
    Node *fast = head->next;
    Node *slow = head;
    while(slow != fast){  // whenever we need to track a loop use this technique, take two variable and one move at 2x speed and other move at x speed. both will be at same point at moment 
        if(fast == NULL || fast->next == NULL){
            return 0;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = fast->next;
    int count = 1;
    while(fast != slow){
        count++;
        fast = fast->next;
    }
    
    return count;
}