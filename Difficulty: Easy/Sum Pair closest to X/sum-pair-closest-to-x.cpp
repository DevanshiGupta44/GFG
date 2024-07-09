//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int n = arr.size();
        vector<int> ans;
        pair<int,int> p;
        int start = 0;
        int end = n-1;
        int mini = INT_MAX;
        while(start<end){
            int sum = arr[start]+arr[end];
            int diff = abs(sum-x);
            if(diff<mini){
                mini = diff;
                p.first = arr[start];
                p.second = arr[end];
            }
            if(sum == x){
                p.first = arr[start];
                p.second = arr[end];
                break;
            }
            else if(sum>x) end--;
            else if(sum<x) start++;
        }
        ans.push_back(p.first);
        ans.push_back(p.second);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends