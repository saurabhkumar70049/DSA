/*
Find length of Loop
EasyAccuracy: 44.26%Submissions: 113K+Points: 2
Register for Mega Job-A-Thon For Experienced Professionals on 21st July | Apply to 15+ Companies

Given a linked list of size N. The task is to complete the function countNodesinLoop() that checks whether a given Linked List contains a loop or not and if the loop is present then return the count of nodes in a loop or else return 0. C is the position of the node to which the last node is connected. If it is 0 then no loop.



Example 1:

Input:
N = 10
value[]={25,14,19,33,10,21,39,90,58,45}
C = 4
Output: 7
Explanation: The loop is 45->33. So
length of loop is 33->10->21->39->
90->58->45 = 7. The number 33 is
connected to the last node to form the
loop because according to the input the
4th node from the beginning(1 based
index) will be connected to the last
node for the loop.
Example 2:

Input:
N = 2
value[] = {1,0}
C = 1
Output: 2
Explanation: The length of the loop
is 2.
Your Task:
The task is to complete the function countNodesinLoop() which contains the only argument as reference to head of linked list and return the length of the loop ( 0 if there is no loop).

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 500
0 <= C <= N-1

*/



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