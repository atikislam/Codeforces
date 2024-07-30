#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    int ans=1000;
    int x;
    for(int i=0;i<n;i++){
       cin>>x;
       x=abs(x);
    //    cout<<x<<endl;
    //    ans=min(ans,x);
        if(x<ans){
            ans=x;
        }
    }
   cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}