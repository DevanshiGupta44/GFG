//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		// Your code goes here
		int start=-1,last=-1;
		int mindis = INT_MAX;
		for(int i=0;i<s.size();i++){
		    if(s[i] == word1){
		        start = i;
		    }
		    if(s[i] == word2){
		        last = i;
		    }
		    if(start!=-1 && last!=-1){
		        mindis = min(mindis,abs(start-last));
		    }
		}
		return mindis;
	}
};



//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends