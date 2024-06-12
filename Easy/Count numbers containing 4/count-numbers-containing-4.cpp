//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        if(n==4){
            return 1;
        }
        int cnt=0;
        for(int i=4;i<=n;i++){
            int t=i;
            while(t>0){
                if(t%10 == 4){
                    cnt++;
                    break;
                }
                t=t/10;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends