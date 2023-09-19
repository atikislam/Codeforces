#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define INF 100000000
#define abc "abcdefghijklmnopqrstuvwxyz"
#define ABC "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define PI 3.1415926535897932384626433832795
//define sort function
#define asort(a) sort(a.begin(),a.end())
#define rsort(a) sort(a.rbegin(),a.rend())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
   ll n;
   cin>>n;
   vector<ll>data;
   for(int i=0;i<n;i++){
      ll x;cin>>x;
      data.push_back(x);
   }
   ll ans=-1e18,sum=-1e18;
   for(int i=0;i<n;i++){
      sum=max(data[i],data[i]+sum);
      ans=max(sum,ans);
   }
   cout<<ans;
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