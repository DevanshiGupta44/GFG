//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node *reverseList(Node *head){
        stack<int> st;
        Node *curr = head;
        while(curr!=NULL){
            st.push(curr->data);
            curr=curr->next;
        }
        curr=head;
        while(curr!=NULL){
            curr->data = st.top();
            st.pop();
            curr=curr->next;
        }
        return head;
    }
    
    
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
       Node *revHead1 = reverseList(num1);
       Node *revHead2 = reverseList(num2);

       
       int carry = 0;
       int sum = 0;

       Node *newHead = new Node(-1);
       Node *x = newHead;
       
       Node *temp1 = revHead1;
       Node *temp2 = revHead2;
       
           while(temp1 != NULL || temp2 != NULL){
               
               sum = carry;
               if(temp1!=NULL) sum = sum + temp1->data;
               if(temp2!=NULL) sum = sum + temp2->data;
               
               Node *newNode = new Node(sum%10);
               carry = sum/10;
               x->next = newNode;
               x = newNode;
               
               if(temp1 != NULL) temp1 = temp1->next;
               if(temp2 != NULL) temp2 = temp2->next;
           }
           
           if(carry){
               Node *newNode = new Node(carry);
               x->next = newNode;
           }
           Node *head = reverseList(newHead->next);
           // To remove zeroes at the beginning 
            while(head->data==0 && head->next!=NULL)
           {
            head=head->next;
           }
       return head;
       
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends