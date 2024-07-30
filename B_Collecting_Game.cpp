#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back({x,i});
    }
    sort(d_array.begin(),d_array.end());
    vector<long long>prefix(n+1,0);
    for(int i=1;i<=n;i++){
       prefix[i]=prefix[i-1]+d_array[i-1].first;
    }
    vector<pair<int,int>>ans;
    stack<int>store;
    for(int i=0;i<n;i++){
       store.push(d_array[i].second);
       if(d_array[i+1].first > prefix[i+1] or i==n-1){
            while(!store.empty()){
                ans.push_back({store.top(),i});
                store.pop();
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it.second<<" ";
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