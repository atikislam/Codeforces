#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long x,n,ans=0;
    cin>>x>>n;
    for(long long i=1;i*i<=x;i++){
        long long check =x/i;
        if(x%i==0){
            if(i>=n){
                ans=max(ans,check);
            }
            if(check>=n){
                ans=max(i,ans);
            }
        }
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