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
    ll n,sum_xor,ans;
    cin>>n;
    vector<ll>d_array;
    ll first;
    cin>>first;
    sum_xor=first;
    d_array.push_back(first);
    for(int i=1;i<n;i++){
       ll x;cin>>x;
       sum_xor=(sum_xor^x);
       d_array.push_back(x);
    }
    ans=sum_xor;
    for(int i=0;i<n;i++){
       ans=min(ans,(sum_xor^d_array[i]));
    }
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