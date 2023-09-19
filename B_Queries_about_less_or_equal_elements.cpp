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
ll find_num(ll x){
    ll l=0,r=a.size()-1,ans=-1;
    while(l<=r){
        ll mid = l+(r-l)/2;
        if(a[mid]==x){
            ans=mid;
            l=mid+1;
        }else if(a[mid]>x){
            r=mid-1;
        }else{
            l=mid+1;
            ans=mid;
        }
    }
    if(ans>=0){
        return ans+1;
    }else{
        return 0;
    }
    
}
void solve(){
   ll n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++){
      ll x;cin>>x;
      a.push_back(x);
   }
   asort(a);
   vector<ll>b;
   for(int i=0;i<m;i++){
      ll x;cin>>x;
      b.push_back(x);
   }
   for(int i=0;i<m;i++){
      cout<<find_num(b[i])<<" ";
   }
    cout<<endl;
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