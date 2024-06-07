//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
#include<array>
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        std::vector<int> arr;
        Node* temp = head;
        while(temp!=NULL){
            if((temp->data) % 2 == 0){
                arr.push_back(temp->data);
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if((temp->data) % 2 != 0){
                arr.push_back(temp->data);
            }
            temp=temp->next;
        }
        Node* newhead = new Node(arr[0]);
        Node* newtemp = newhead;
        
        for(int i=1;i<N;i++){
            newtemp->next = new Node(arr[i]);
            newtemp = newtemp->next;
        }
        return newhead;
    }
};
















//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends