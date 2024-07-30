#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>d_array;
    for(int i=1;i<=n;i++){
       int x;cin>>x;
       d_array.push_back({x,i});
    }
    sort(d_array.rbegin(),d_array.rend());
    int ans[n+2]={0};
    ans[0]=2;
    ans[d_array[0].second]=1;
    int pos=3,neg=0;
    int f=1;
    long long walk=(d_array[0].first)*2LL;
    for(int i=1;i<n;i++){
       if(f){
        walk+=2LL*(abs(2-pos))*(d_array[i].first);
        ans[d_array[i].second]=pos++;
       }else{
        walk+=2LL*(abs(2-neg))*(d_array[i].first);
        ans[d_array[i].second]=neg--;
       }
       f=1-f;
    }
    cout<<walk<<endl;
    for(int i=0;i<=n;i++){
       cout<<ans[i]<<" ";
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