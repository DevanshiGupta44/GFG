//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string p, string t)
        {
            vector<int>ans;
            int m=p.size(),n=t.size(),k=0;
            vector<int>lps(m,0);
            for(int i=1;i<m;i++){
                while(k>0 and p[k]!=p[i]) k=lps[k-1];
                if(p[i]==p[k]){
                    lps[i]=k+1;
                    k++;
                }
                else lps[i]=0;
            }
            int j=0;
            for(int i=0;i<n;i++){
                while(j>0 and p[j]!=t[i]) j=lps[j-1];
                if(t[i]==p[j]){
                    if(j+1==p.size()) ans.push_back(i-p.size()+2);
                    j++;
                }
            }
            if(ans.size()==0) ans.push_back(-1);
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends