//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
            string t;
            int n=s.size();
            long long int m=1<<n;
            
            for(long long int i=1;i<m;i++)
            {
                t="";
                for(int j=0;j<n;j++)
                {
                    if(i&(1<<j))
                        t+=s[j];
                }
               
                ans.push_back(t);
            }
            sort(ans.begin(),ans.end());
            return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends