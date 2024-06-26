//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
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
#include <stack>
#include <vector>
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
    //Your code here
    if (head == nullptr) return true;

    std::stack<int> st;
    Node* temp = head;
    std::vector<int> result;

    // Push all node data onto the stack
    while(temp != nullptr) {
        st.push(temp->data);
        temp = temp->next;
    }

    // Transfer data from stack to vector
    while(!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }

    // Check for palindrome
    int left = 0;
    int right = result.size() - 1;
    while(left < right) {
        if(result[left] != result[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends