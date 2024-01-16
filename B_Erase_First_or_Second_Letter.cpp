#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,ans=0;
    cin>>n;
    string s;cin>>s;
    set<char>set_data;
    for(int i=0;i<n;i++){
       set_data.insert(s[i]);
       ans+=(int)set_data.size();
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