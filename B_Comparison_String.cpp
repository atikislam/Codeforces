#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    int ans=0;
    int cnt_less=0,cnt_grater=0;
    for(int i=0;i<=n;i++){
       if(s[i]=='<')cnt_less++;
       else{
        ans=max(ans,cnt_less);
        cnt_less=0;
       }
       if(s[i]=='>')cnt_grater++;
       else{
        ans=max(ans,cnt_grater);
        cnt_grater=0;
       }
    }
    cout<<ans+1<<endl;
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