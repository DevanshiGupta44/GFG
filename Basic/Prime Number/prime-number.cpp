//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int isPrime(int n){
        // code here
        int count=0;
        int sqr = sqrt(n);
        if(n<=1){
            return false;
        }
        for(int i=2;i<=sqr;i++){
            if(n%i==0){
                count=count+1;
            }
            if(count>0){
                return false;
            }
        }
        if(count>0){
            return false;
        }
        else{
            return true;
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends