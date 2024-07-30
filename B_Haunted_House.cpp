#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define abc "abcdefghijklmnopqrstuvwxyz"
const int mod=1e9+7;
const int s_size=1e6+7;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int>d_array;
    int ctn=1;
    for(int i=n-1;i>=0;i--){
       if(s[i]=='0'){
        d_array.push_back(n-i-ctn);
        ctn++;
       }
    }
    long long ans=0;
    for(int i=0;i<n;i++){
       if(i<d_array.size()){
        ans+=d_array[i];
       }else{
        ans=-1;
       }
       cout<<ans<<" ";
    }cout<<endl; 

}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
