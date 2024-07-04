//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int start=0;
        int ans=0;
        if(s[0] == '-'){
            start = 1;
        }
        for(int i=start;i<s.size();i++){
            if(s[i]>= '0' && s[i] <= '9'){
                int d = s[i] - '0';
                ans = ans*10+d;
            }
            else{
                return -1;
            }
        }
        if(s[0] == '-'){
            return -ans;
        }
        else{
            return ans;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		int ans=ob.atoi(s);
		cout<<ans<<endl;
	}
}
// } Driver Code Ends