#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long a,b,xk,yk,xq,yq,ab_neg,ab_pos,ans=0;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    if(a+b==xk+yk || a+b+a+b==xk+yk)ans++;
    if(a+b==xq+yq || a+b+a+b==xq+yq)ans++;
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