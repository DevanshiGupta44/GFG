//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        if(arr[s[i] - 'a'] == 1) return string(1,s[i]);
        arr[s[i] - 'a']++;
    }
    return "-1";
}