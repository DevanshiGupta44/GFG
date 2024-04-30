//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        if(str1.length() != str2.length()) {
            return false;
        }
    
        std::unordered_map<char, int> m;
        for(char c : str1) {
            m[c]++;
        }
    
        for(char c : str2) {
            if(m[c] > 0) {
                m[c]--;
            } else {
                k--;
            }
        }
    
        return k >= 0;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends