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
    ll n,ans=0;
    cin>>n;
    vector<ll>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       d_array.push_back(x);
    }
    set<ll>div_n;
    for(int i=1;i*i<=n;i++){
       if(n%i==0){
            div_n.insert(i);
            if(i*i!=n){
                div_n.insert(n/i);
            }
       }
    }
    for(auto it:div_n){
       ll mx=0,mn=1e18,sum=0,ctn=1;
       for(int i=0;i<n;i++){
          sum+=d_array[i];
          if(it==ctn){
            mx=max(mx,sum);
            mn=min(mn,sum);
            ctn=1;
            sum=0;
          }else{
            ctn++;
          }
       }
       ans=max(ans,mx-mn);
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