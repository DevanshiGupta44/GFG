//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    std::sort(arr,arr+n);
    int s=0;
    int e=n-1;
    int ans1=-1;
    int ans2=-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==x){
            ans1=arr[mid];
            ans2=arr[mid];
            break;
        }
        else if(arr[mid]<x){
            ans1=arr[mid];
            s=mid+1;
        }
        else{
            ans2=arr[mid];
            e=mid-1;
        }
    }
    return {ans1,ans2};
}