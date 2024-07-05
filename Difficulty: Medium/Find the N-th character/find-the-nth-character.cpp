//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++



class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //to make constant "s" we have to initilalize one more string result
        string result = s;
        while(r != 0)
        {
            string ans = "";
            
            for(int i =0; i<s.size(); i++)
            {
                if(result[i] == '0')
                {
                    ans = ans + "01";
                }
                
                else
                {
                    ans = ans + "10";
                }
            }
            
            result=ans;
            r--;
        }
        
        return result[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends