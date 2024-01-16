#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b)cout<<c<<endl;
    else if(a==c)cout<<b<<endl;
    else cout<<a<<endl;
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