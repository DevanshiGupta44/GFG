//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// class Solution{
// 	public:
// 	int NthRoot(int n, int m)
// 	{
// 	    // Code here.
// 	    int s=0;
// 	    int e=m;
// 	    if(m==1){
// 	        return 1;
// 	    }
	    
// 	    while(s<=e){
// 	        int mid=s+(e-s)/2;
// 	        long minN=std::pow(mid,n);
// 	        if(minN==m){
// 	            return mid;
// 	        }
// 	        else if(minN<m){
// 	            s=mid+1;
// 	        }
// 	        else{
// 	            e=mid-1;
// 	        }
// 	    }
// 	    return -1;
// 	}  
// };
//code
class Solution{
public:
    int NthRoot(int n, int m) {
        // Code here
        int s = 1;
        int e = m;

        if (m == 1) {
            return 1;
        }

        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long midN = 1;
            
            // Manual multiplication to avoid precision errors
            for (int i = 0; i < n; ++i) {
                midN *= mid;
                if (midN > m) {
                    break;  // Early termination if result exceeds m
                }
            }

            if (midN == m) {
                return mid;
            } else if (midN < m) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return -1;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends