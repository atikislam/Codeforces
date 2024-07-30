#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,r,b;
    cin>>n>>r>>b;
    int split=(r+b)/(b+1);
    string ans="";
    while(r>0){
        for(int j=0;j<min(split,r);j++){
           ans+='R';
           r--;
        }
        if(b>0){
            ans+='B';
            b--;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(b>0 && ans[i]=='R'){
            cout<<'B';
            b--;
        }
    }cout<<endl;
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