#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define abc "abcdefghijklmnopqrstuvwxyz"
#define asort(a) sort(a.begin(),a.end())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
bool cmp(pair<int,int>a,pair<int,int>b){
    return (a.second<b.second);
}
void solve(){
    ll n,ans=0,sum=0;
    cin>>n;
    vector<pair<ll,ll>>d_array;
    for(int i=0;i<n;i++){
       ll x,y;cin>>x>>y;
       d_array.push_back({x,y});
    }
    sort(d_array.begin(),d_array.end(),cmp);
    ll end =0;
    for(auto it:d_array){
        if(it.first >= end){
            end=it.second;
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    Faster;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}