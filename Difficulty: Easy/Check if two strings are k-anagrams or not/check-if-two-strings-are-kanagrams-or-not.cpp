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
        if(str1.length()!=str2.length()){
            return 0;
        }
        std::unordered_map<char,int> mpp;
        for(int i=0;i<str1.length();i++){
            mpp[str1[i]]++;
        }
        for(int i=0;i<str2.length();i++){
            if(mpp[str2[i]]>0){
                mpp[str2[i]]--;
            }
            else{
                k--;
            }
        }
        if(k>=0){
            return 1;
        }
        else{
            return 0;
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