//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(std::vector<int>& a) {
        int n = a.size();
        
        // If the array has only one element, return it as the peak.
        if (n == 1) {
            return a[0];
        }

        int s = 0;
        int e = n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            // Check if mid element is greater than its neighbors
            if ((mid == 0 || a[mid] > a[mid - 1]) && (mid == n - 1 || a[mid] > a[mid + 1])) {
                return a[mid];
            }

            // If the mid element is part of the increasing slope
            if (mid < n - 1 && a[mid] < a[mid + 1]) {
                s = mid + 1;
            } else {
                // If the mid element is part of the decreasing slope
                e = mid - 1;
            }
        }

        // Return the last seen element (this should never be reached)
        return -1;
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends