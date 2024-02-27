//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    std::unordered_set<int> seen;

        // Traverse the array
        for (int i = 0; i < n; ++i) {
            // Calculate the complement needed to achieve the sum x
            int complement = x - arr[i];

            // If the complement is found in the set, we found two elements whose sum is x
            if (seen.find(complement) != seen.end()) {
                return true;
            }

            // Add the current element to the set
            seen.insert(arr[i]);
        }

        // If no such elements are found, return false
        return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends