#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    long long ans=0;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       ans+=abs(x);
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