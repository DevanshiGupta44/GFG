//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
public:
    int i=0;
    int find(int n){
        if(n==0){
            return i;
        }
        if(n<0){
            return -1;
        }
        i++;
        find(n-i);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.find(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends