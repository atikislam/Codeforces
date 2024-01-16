#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int x,y,z,ans;
    cin>>x>>y>>z;
    ans=z/2;
    ans/=x*y;
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