#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    set<char>check;
    vector<int>a(n,0),b(n,0);
    for(int i=0;i<n;i++){
        check.insert(s[i]);
        a[i]=check.size();
    }
    check.clear();
    for(int i=n-1;i>=0;i--){
        check.insert(s[i]);
        b[i]=check.size();
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
       ans=max(ans,a[i]+b[i+1]);
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