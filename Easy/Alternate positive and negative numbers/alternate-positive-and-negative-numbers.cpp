//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector <int> pos;
	    vector<int> neg;
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            pos.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    int s = pos.size();
	    int t = neg.size();
	    int i=0 , j=0;
	    while(i<s && j<t){
	        ans.push_back(pos[i]);
	        ans.push_back(neg[i]);
	        i++;
	        j++;
	    }
	    while(i<s){
	        ans.push_back(pos[i]);
	        i++;
	    }
	    while(j<t){
	        ans.push_back(neg[j]);
	        j++;
	    }
	    for(int k=0;k<n;k++){
	        arr[k] = ans[k];
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends