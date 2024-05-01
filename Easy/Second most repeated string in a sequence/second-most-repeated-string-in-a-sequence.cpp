//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string , int>m;
        int maxi=INT_MIN , maxi2=INT_MIN;
        string ans1="" , ans2="";
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        for(auto it:m)
        {
            if(it.second > maxi)
            {
                maxi2=maxi;
                ans2=ans1;
                maxi=it.second;
                ans1=it.first;
            }
            else if(it.second > maxi2)
            {
                maxi2=it.second;
                ans2=it.first;
            }
        }
        return ans2;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends