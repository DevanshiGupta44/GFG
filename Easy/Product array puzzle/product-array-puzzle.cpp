//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here  
        vector<long long >v(n,0);     
       long long zero=0;
       for(auto i: nums){
           if(i==0){
            zero++;
           }
       }
      if(zero>1) return v;
       
       long long mul=1;
       for(auto i:nums){
           if(i!=0){
               mul=mul*i;
           }
       }
       
      for(int i=0;i<n;i++){
          if(nums[i]==0){
              v[i]=mul;
               return v;
          }
      }
      for(int i=0;i<n;i++){
          v[i]=mul/nums[i];
      }
      return v;
    }
    
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends