#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back({x,-i});
    }
    sort(d_array.begin(),d_array.end());
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
    }
    for(auto it:d_array){
        cout<<it.first<<" "<<it.second<<endl;
    }
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