//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int A=0,B=0;
        vector<int> v;
        std::sort(arr.begin(),arr.end());
        bool isFound = false , is_double = false;
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        // for(int i=0;i<n-1;i++){
            
        //     if((arr[i]+1 != arr[i+1]) && (arr[i] != arr[i+1])){
        //         A = arr[i]+1;
        //     }
        //     if(arr[i] == arr[i+1]){
        //         B = arr[i];
        //     }
        // }
        
        // cout<<A<<" "<<B;
        
        for(int i=1; i<n; i++){
            if( !isFound){
                if(!is_double && arr[i-1] != i){
                    isFound = true;
                    B = i;
                }
                else if(is_double && arr[i] != i){
                    isFound = true;
                    B = i;
                }
            }
            if(arr[i-1] == arr[i]){
                is_double = true;
                A = arr[i];
            }
        }
        v.push_back(A);
        v.push_back(B == 0 ? n : B);
        return v;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends