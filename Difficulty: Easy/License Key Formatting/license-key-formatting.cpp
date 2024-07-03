//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string s, int k){
    	string ans="";
    	int count=0;
    	for(int i=s.length()-1;i>=0;i--){
    	    if(s[i] == '-'){
    	        continue;
    	    }
    	    if(count==k){
    	        ans.push_back('-');
    	        count=0;
    	    }
    	    ans.push_back(toupper(s[i]));
    	    count++;
    	}
    	std::reverse(ans.begin(),ans.end());
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
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends