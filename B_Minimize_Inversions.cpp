#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin>>n;
    vector<int>d_array_A;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array_A.push_back(x);
    }
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       ans.push_back({d_array_A[i],x});
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;i++){
       cout<<ans[i].first<<" ";
    }cout<<endl;
    for(int i=0;i<n;i++){
       cout<<ans[i].second<<" ";
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