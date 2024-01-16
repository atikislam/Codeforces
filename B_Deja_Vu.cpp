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
    ll n,q;
    cin>>n>>q;
    vector<ll>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       d_array.push_back(x);
    }
    vector<pair<int,int>>modifi;
    int mn=1e9;
    for(int i=0;i<q;i++){
       ll x;cin>>x;
       if(x<mn){
         mn=x;
         int power_2=(1<<x);
         x--;
         int add = (1<<x);
         modifi.push_back({power_2,add});
       }
       
    }
    for(int i=0;i<n;i++){
       for(auto it:modifi){
            if(d_array[i]%it.first==0){
               d_array[i]+=it.second;
            }
      }
    }
    for(int i=0;i<n;i++){
       cout<<d_array[i]<<" ";
    }cout<<endl;
}
int main() {
    Faster;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}