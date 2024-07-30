#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    set<int>ans_a,ans_b;
    int a=0,b=0;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       if(x<=k)ans_a.insert(x);
    }
    for(int i=0;i<m;i++){
       int x;cin>>x;
       if(x<=k)ans_b.insert(x);
    }

    if((int)ans_a.size()<k/2 || (int)ans_b.size()<k/2){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<=k;i++){
       if(!ans_a.count(i) and !ans_b.count(i)){
        cout<<"NO"<<endl;return;
       }
    }
    cout<<"YES"<<endl;

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