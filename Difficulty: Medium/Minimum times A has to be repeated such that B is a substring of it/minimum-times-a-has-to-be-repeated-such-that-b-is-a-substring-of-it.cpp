//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        // int cnt=0;
        // string str="";
        // while(str.length()<=B.length()){
        //     str=str+A;
        //     cnt++;
        //     if(str.find(B) != string::npos){
        //         return cnt;
        //     }
        // }
        // return -1;
        string S = "";
        int count = 0;
        while(S.length() < B.length()){
            S+= A;
            count++;
        }
        if (S.find(B) !=  string::npos) {
            return count;
        }
        
        S+= A;
        count++;
        if (S.find(B) !=  string::npos) {
            return count;
        }
        
        return -1;
    }
};

 
    
    

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends