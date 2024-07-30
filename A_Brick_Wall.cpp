#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long n,m;
    cin>>n>>m;
    long long ans = n*(m/2);
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