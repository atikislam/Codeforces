#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long n,m,l,x,y;
    cin>>n>>m>>x>>y>>l;
    long long ans=1;
    long long left=(y-1)/l;
    long long right=(m-y)/l;
    long long up=(x-1)/l;
    long long down=(n-x)/l;
    ans+=left+right;
    ans*=(up+down)+1;
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