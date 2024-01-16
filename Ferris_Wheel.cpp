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
    ll n,x,ans=0;
    cin>>n>>x;
    vector<ll>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       d_array.push_back(x);
    }
    asort(d_array);
    
    int l=0,r=n-1;
    while(l<=r){
        int sum = d_array[l]+d_array[r];
        if(sum<=x){
            ans++;
            l++;r--;
        }if(sum>x){
            ans++;
            r--;
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