#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    vector<int>d_array(n+1,0);
    int cnt=0;
    for(int i=1;i<=n;i++){
       if(s[i-1]=='W')cnt++;
       d_array[i]=cnt;
    }
    int ans=1e9;
    for(int i=0;i<=n-k;i++){
       ans=min(ans,d_array[i+k]-d_array[i]);
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