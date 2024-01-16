#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,k,ans=0,mx=0;
    cin>>n>>k;
    vector<int>a,b;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       a.push_back(x);
    }
    for(int i=0;i<n;i++){
       int x;cin>>x;
       b.push_back(x);
    }
    int sum=0;
    for(int i=1;i<=min(n,k);i++){
       sum+=a[i-1];
       mx=max(mx,b[i-1]);
       int bi_mx=mx*(k-i);
       ans=max(ans,sum+bi_mx);
    }
    cout<<ans<<endl;
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