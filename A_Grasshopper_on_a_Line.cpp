#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int x,k;
    cin>>x>>k;
    if((x&1)!=(k&1) || x<k){
        cout<<1<<endl;
        cout<<x<<endl;
    }else{
        cout<<2<<endl;
        cout<<k+1<<" ";
        cout<<x-k-1<<endl;
    }
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