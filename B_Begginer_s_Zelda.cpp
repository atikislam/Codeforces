#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,ans=0;
    cin>>n;
    map<int,int>freq;
    for(int i=0;i<n-1;i++){
       int u,v;cin>>u>>v;
       freq[u]++;
       freq[v]++;
    }
    for(auto it:freq){
        if(it.second==1)ans++;
    }
    ans++;
    cout<<ans/2<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}