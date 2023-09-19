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
vector<ll>data,vn;
ll n,x;
void solve(){
   cin>>n;
   for(int i=0;i<n;i++){
      ll x;cin>>x;
      data.push_back(x);
   }
   vn.push_back(n);
}
int main() {
    Faster;
    ll t,tt;
    cin>>t;
    tt=t;
    while(t--){
        solve();
    }
    cin>>x;
    for(int i=0;i<tt;i++){
       for(int j=0;j<vn[i];j++){
          if(x==data[j]){
            
          }
       }
    }
    //solve();
   return 0;
}