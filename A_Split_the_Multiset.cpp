#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    if(n==1){
        cout<<0<<endl;return;
    }
    else if(n<=k){
        ans=1;
    }else{
        n+=-1+k-2;
        ans=n/(k-1);
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