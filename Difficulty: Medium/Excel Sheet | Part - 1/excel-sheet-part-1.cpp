//{ Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    string ExcelColumn(int N)
    {
        string ans = "";
        
        while(N > 0){
            int rem = N % 26;
            
            if(rem == 0){
            ans = 'Z' + ans;
            N = N/26-1;
        }
        
        else{
            char ch = 'A' + rem-1;
            ans = ch + ans;
            N = N/26;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
    
// } Driver Code Ends