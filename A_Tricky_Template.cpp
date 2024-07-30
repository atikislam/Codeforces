#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    string a,b,c;cin>>a>>b>>c;
    for(int i=0;i<n;i++){
       if(a[i]!=c[i] and b[i]!=c[i]){
        cout<<"YES"<<endl;return;
       }
    }
    cout<<"NO"<<endl;
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