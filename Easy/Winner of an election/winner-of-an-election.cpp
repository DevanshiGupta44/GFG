//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string, int> m;
for(int i=0; i<n; i++) m[arr[i]]++;
int max_votes = 0;
string winner = "";
for(auto i: m) {
     if(i.second > max_votes) {
           max_votes = i.second;
            winner = i.first;
      } else if (i.second == max_votes && i.first < winner) {
            winner = i.first;
            max_votes = i.second;
      }
}
vector<string> res;
res.push_back(winner);
res.push_back(to_string(max_votes));
return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends