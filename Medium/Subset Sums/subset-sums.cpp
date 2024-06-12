//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void findss(int ind, int sum, vector<int> & arr, int N , vector<int>& sub){
        if(ind == N){
            sub.push_back(sum);
            return;
        }
        //pick
        findss(ind+1,sum+arr[ind],arr,N,sub);
        //not-pick
        findss(ind+1,sum,arr,N,sub);
    }
  public:
    vector<int> subsetSums(vector<int> arr, int N) {
        // Write Your Code here
        vector<int> sub;
        findss(0,0,arr,N,sub);
        std::sort(sub.begin(),sub.end());
        return sub;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends