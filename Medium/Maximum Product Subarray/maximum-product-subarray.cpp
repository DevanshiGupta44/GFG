//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

// 	// Function to find maximum product subarray
// 	long long maxProduct(vector<int> arr, int n) {
// 	    // code here
// 	   // int total = 1;
// 	   // vector<int> ans;
// 	   // for(int i=0;i<n;i++){
// 	   //     if(arr[i] == 0 || arr[i] < 0 ){
// 	   //         break;
// 	   //     }
// 	   //     else{
// 	   //         ans.push_back(arr[i]);
// 	   //     }
// 	   // }
// 	   // int N = ans.size();
// 	   // for(int i=0;i<N;i++){
// 	   //     total = total * ans[i];
// 	   // }
// 	   // return total;
	   
// 	   if(n==1) return arr[0];
// 	   long long ans = INT_MIN; // so that we can also store -ve 
// 	   for(int i=0;i<n;i++){
// 	       long long temp  = 1; // value will get inc
// 	       for(int j=0;j<n;j++){
// 	           temp = temp * arr[j];
// 	           ans = max(ans,temp);
// 	       }
// 	   }
// 	   return ans;
// 	}
	
	
	long long maxProduct(vector<int> arr, int n) {
	    if(n==1) return arr[0];
	    long long ans=INT_MIN;
	    for(int i=0;i<n;i++){
	        long long temp=1;
	        for(int j=i;j<n;j++){
	            temp*=arr[j];
	            ans=max(ans,temp);
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends