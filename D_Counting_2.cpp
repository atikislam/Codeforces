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
vector<ll>a;
ll find_nums(ll x){
    ll l=0,r=a.size()-1,ans=1e9;
    while(l<=r){
        ll mid = l+(r-l)/2;
        if(a[mid]==x){
            ans=min(ans, mid);
            r=mid-1;
        }else if(a[mid]<x){
            l=mid+1;
        }else{
            ans=min(ans, mid);
            r=mid-1;
        }
    }
    if(ans==1e9){
        return 0;
    }
    return a.size()-ans;
}
void solve(){
   ll n,q;
   cin>>n>>q;
   for(int i=0;i<n;i++){
      ll x;cin>>x;
      a.push_back(x);
   }
    asort(a);
    vector<ll>qdata;
    for(int i=0;i<q;i++){
       ll y;cin>>y;
       qdata.push_back(y);
    }
    for(int i=0;i<q;i++){
       cout<<find_nums(qdata[i])<<endl;
    }

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