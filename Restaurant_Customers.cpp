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
void solve(){
    ll n,ans=0,sum=0;
    cin>>n;
    vector<pair<int,bool>>d_array;
    for(int i=0;i<n;i++){
       ll x,y;cin>>x>>y;
       d_array.push_back({x,true});
       d_array.push_back({y,false});
    }
    asort(d_array);
    for(auto it:d_array){
        if(it.second){
            sum++;
            ans=max(sum,ans);
        }else{
            sum--;
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