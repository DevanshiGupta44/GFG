//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
      int n = S.size();
        string res = "";
        string w = "";
        for (int i = n - 1; i >= 0; --i) 
        {
            if (S[i] == '.') 
            {
                res=res + w;
                res = res + '.';
                w = "";  
            } 
            else 
            {
                w = S[i] + w;
            }
        }
        res = res + w;
        return res;
}
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends