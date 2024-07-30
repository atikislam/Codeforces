#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    int ans=0,f=1;
    for(int i=0;i<n-1;i++){
       if(s[i]=='@')ans++;
       if(s[i]=='*' && s[i+1]=='*'){
        f=0;
        break;
       }
    }
    if(f && s[n-1]=='@'){
       ans++;
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