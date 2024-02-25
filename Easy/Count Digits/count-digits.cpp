//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int evenlyDivides(int n){
        //code here
        int a=n;
        int count = 0,enddigit=0;
        while(n>0){
            enddigit = n % 10;
            n=n/10;
            if(enddigit!=0){
            if(a%enddigit == 0){
                count=count+1;
            }
            }
        }
        return count;
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
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends