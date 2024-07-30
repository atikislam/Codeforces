#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int a,b,xk,yk,xq,yq,ans=0;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    int dx[]={a,-b,-b,-a,b,b,a,-a};
    int dy[]={-b,a,-a,-b,-a,a,b,b};
    set<pair<int,int>>xyk,xyq;
    for(int i=0;i<8;i++){
        xyk.insert({xk+dx[i],yk+dy[i]});
        xyq.insert({xq+dx[i],yq+dy[i]});
    }
    for(auto it:xyk){
        if(xyq.find(it)!=xyq.end())ans++;
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