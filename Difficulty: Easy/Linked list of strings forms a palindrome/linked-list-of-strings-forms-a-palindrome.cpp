//{ Driver Code Starts
// Code by Shubham Joshi
#include <bits/stdc++.h>
using namespace std;

struct Node {
    string data;
    Node *next;

    Node(string x) {
        data = x;
        next = NULL;
    }
};

Node *newNode(string str) {
    Node *new_node = new Node(str);
    new_node->next = NULL;
    return new_node;
}

void print(Node *root) {
    Node *temp = root;

    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}


// } Driver Code Ends
/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
// class Solution {
//   public:
//     bool compute(Node* head) {
//         // Your code goes here
//         string str;
//         Node* temp = head;
//         while(temp!=NULL ){
//             str = str+(temp->data);
//             temp=temp->next;
//         }
//         int n  = str.length();
//         int st = str[0];
//         int la = str[n];
//         while(st >= la){
//             if(str[st] == str[la]){
//                 st++;
//                 la--;
//             }
//             else{
//                 return false;
//             }
//         }
//         return true;
//     }
// };

class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        std::string str;
        Node* temp = head;
        while (temp != NULL) {
            str += temp->data;
            temp = temp->next;
        }
        
        int n = str.length();
        if (n <= 1) {
            return true;  // A string with 0 or 1 characters is always a palindrome
        }
        
        int st = 0;         // Start index
        int la = n - 1;     // Last index
        
        while (st < la) {
            if (str[st] != str[la]) {
                return false;
            }
            st++;
            la--;
        }
        
        return true;
    }
};










//{ Driver Code Starts.

int main() {
    // your code goes here
    int T;
    cin >> T;

    while (T--) {
        int K;
        cin >> K;
        struct Node *head = NULL;
        struct Node *temp = head;

        for (int i = 0; i < K; i++) {
            string str = "";
            cin >> str;
            if (head == NULL)
                head = temp = new Node(str);
            else {
                temp->next = new Node(str);
                temp = temp->next;
            }
        }
        Solution ob;
        bool ans = ob.compute(head);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends