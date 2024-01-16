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
    ll n,ans=0,zero=0;
    cin>>n;
    vector<ll>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       if(x==0)zero++;
       ans=max(ans,x-1);
       d_array.push_back(x);
    }
    ans=max(ans,zero);
    cout<<ans<<endl;
}
int main() {
    Faster;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}