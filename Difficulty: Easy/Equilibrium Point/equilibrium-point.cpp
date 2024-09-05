//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        long long sum = 0;
        for(int i = 0;i<arr.size();i++){
            sum+=arr[i];
        }
        long long left_sum = 0;
        long long right_sum = sum;
        for(int i = 0;i<arr.size();i++){
            if(i==0){
                left_sum = 0;
            }
            else if(i>0){
                left_sum += arr[i-1];
            }
            right_sum -= arr[i];
            if(left_sum==right_sum) return i+1;
        }
        return -1;
    }


};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends