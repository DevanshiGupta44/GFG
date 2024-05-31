//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
// class Solution{
// public:	
// 	/* if x is present in arr[] then returns the count
// 		of occurrences of x, otherwise returns 0. */
// 	int count(int arr[], int n, int x) {
// 	    // code here
// 	      int count(int arr[], int n, int x) {
//         int first = FirstOcc(arr, n, x);
//         if (first == -1) {
//             return 0;  // x is not present in the array
//         }
//         int last = LastOcc(arr, n, x);
//         return last - first + 1;
//     }
//     //um
// 	private:
// 	    int FirstOcc(int arr[], int n, int x){
// 	        int start = 0;
// 	        int end = n - 1;
// 	        int mid = start + (start - end / 2);
	        
// 	        while(start <= end)
// 	        {
// 	            if(arr[mid] == x){
// 	            return mid;
// 	            end = mid - 1;
// 	        }
// 	        if(arr[mid]<x){
// 	            start = mid + 1;
// 	        }
// 	        else{
// 	            end = mid - 1;
// 	        }
// 	            }
// 	        return 0;
// 	    }
// 	    int LastOcc(int arr[], int n, int x){
// 	        int start = 0;
// 	        int end = arr.size() - 1;
// 	        int mid = start + (start - end / 2);
// 	        while(start < = end){
// 	        if(arr[mid] == x){
// 	            return mid;
// 	            start = mid + 1;
// 	        }
// 	        if(arr[mid]<x){
// 	            start = mid + 1;
// 	        }
// 	        else{
// 	            end = mid - 1;}        
// 	        }
// 	        return 0;
// 	    }
// 	}
// };
//code
class Solution {
public:	
    /* if x is present in arr[] then returns the count
       of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x) {
        int first = FirstOcc(arr, n, x);
        if (first == -1) {
            return 0;  // x is not present in the array
        }
        int last = LastOcc(arr, n, x);
        return last - first + 1;
    }

private:
    int FirstOcc(int arr[], int n, int x) {
        int start = 0;
        int end = n - 1;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == x) {
                result = mid;
                end = mid - 1;  // Move left to find the first occurrence
            } else if (arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return result;
    }

    int LastOcc(int arr[], int n, int x) {
        int start = 0;
        int end = n - 1;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == x) {
                result = mid;
                start = mid + 1;  // Move right to find the last occurrence
            } else if (arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return result;
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
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends