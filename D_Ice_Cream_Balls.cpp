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
    ll n;
    cin>>n;
    ll l=1,r=2e9,midCr,mid;
    while(r-l>1){
        mid = l+(r-l)/2;
        midCr=(mid*(mid-1))/2;
        if(midCr<=n)l=mid;
        else r=mid;
    }
    ll lowCr = (l*(l-1))/2;
    ll ans=l+(n-lowCr);
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