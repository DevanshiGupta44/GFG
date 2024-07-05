//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // string Reduced_String(int k,string str){
        // Your code goes here
    //     if(k==1){
    //         return ("");
    //     }
    //     stack<pair<char,int>> s;
    //     s.push({str[0] , 1});
    //     for(int i=1;i<str.length();i++){
    //         if(!s.empty() && (str[i] == s.top().first)){
    //             s.push({str[i] , s.top().second + 1});
    //         }
    //         else{
    //             s.push({str[i] , 1});
    //         }
    //         if(s.top().second == k){
    //             int t=k;
    //             while(t--){
    //                 s.pop();
    //             }
    //         }
    //     }
    //     string ans="";
    //     while(!s.empty()){
    //         ans=ans+s.top().first;
    //         s.pop();
    //     }
    //     std::reverse(ans.begin(),ans.end());
    //     return(ans);
    // }
    //code
       string Reduced_String(int k,string str){
        if(k==1)
            return("");
        stack<pair<char,int>> s;
        s.push({str[0],1});
        for(int i=1;i<str.size();i++){
            if(!s.empty() && (str[i]==s.top().first))
                s.push({str[i],s.top().second+1});
            else
                s.push({str[i],1});
        
            if(s.top().second == k){
                int t=k;
                while(t--){
                    s.pop();
                    
                }
            }
            
        }
        
        string ans="";
        while(!s.empty()){
            
            ans+=s.top().first;
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return(ans);
        
    }
};


//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends