//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    
    // Node* FindNewTail(Node* temp, int n){
    //     int i=0;
    //     while(temp!=NULL){
    //         if(i==n){
    //             return temp;
    //         }
    //         i++;
    //         temp=temp->next;
    //     }
    //     return temp;
    // }
    
    
    // Node* rotate(Node* head, int k)
    // {
    //     // Your code here
    //     if(head==NULL || k==0){
    //         return head;
    //     }
    //     Node* temp = head;
    //     int cnt=0;
    //     while(temp!=NULL){
    //         cnt++;
    //         temp=temp->next;
    //     }
    //     if(cnt%k==0){
    //         return head;
    //     }
    //     cnt=cnt%k;
    //     temp->next = head;
    //     Node* newtail = FindNewTail(head,cnt-k);
    //     head = newtail->next;
    //     newtail->next = nullptr;
    //     return head;
    //     //code
    // }
    
    //code
    
     Node* FindNewTail(Node* temp, int n) {
        int i = 1;
        while(temp != NULL) {
            if(i == n) {
                return temp;
            }
            i++;
            temp = temp->next;
        }
        return temp;
    }

    Node* rotate(Node* head, int k) {
        // Your code here
        if(head == NULL || k == 0) {
            return head;
        }

        // Step 1: Count the number of nodes in the list
        Node* temp = head;
        int cnt = 1;  // start from 1 since we're already at the head node
        while(temp->next != NULL) {
            cnt++;
            temp = temp->next;
        }

        // Step 2: If k is greater than the length of the list, adjust k
        k = k % cnt;

        // If k is 0 after the modulus operation, no rotation is needed
        if(k == 0) {
            return head;
        }

        // Step 3: Make the list circular
        temp->next = head;

        // Step 4: Find the new tail, which is (cnt - k) nodes from the start
        Node* newtail = FindNewTail(head, k );

        // Step 5: The new head is the node after newtail
        //Node* newhead = newtail->next;
        head = newtail->next;
        // Step 6: Break the circular list
        newtail->next = NULL;

        return head;
    }
};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends