//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        // int left = 0;
        // int right = n-1;
        // int leftsum = a[0];
        // int rightsum = a[n-1];
        // while(left<right){
        //     if(leftsum == rightsum){
        //         if(left==right){
        //             return left + 1;
        //         }
        //         leftsum = leftsum + a[left++];
        //         rightsum = rightsum + a[right--];
        //     }
        //     else if(leftsum<rightsum){
        //         leftsum = leftsum + a[left++];
        //     }
        //     else{
        //         rightsum = rightsum + a[right--];
        //     }
        // }
        // return -1;
        //code
        int left = 0;
    int right = n - 1;
    long long int leftsum = a[0];
    long long int rightsum = a[n - 1];

    while (left < right) {
        if (leftsum == rightsum) {
            if (left == right) {
                return left + 1;
            }
            leftsum += a[++left];
            rightsum += a[--right];
        }
        else if (leftsum < rightsum) {
            leftsum += a[++left];
        }
        else {
            rightsum += a[--right];
        }
    }
    
    if (leftsum == rightsum && left == right) { // Check if left and right pointers meet
        return left + 1;
    }

    return -1;
    }
};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends