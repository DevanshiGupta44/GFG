//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void findcombo(int ind, int target,vector<int> & arr, vector<vector<int>> & ans,vector<int>& ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i] == arr[i-1]) continue;
            if(arr[ind]>target) break;
            ds.push_back(arr[i]);
            findcombo(i+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int target)
    {
        //code here
        vector<vector<int>> ans;
        vector<int> ds;
        std::sort(arr.begin(),arr.end());
        findcombo(0,target,arr,ans,ds);
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
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends