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
    ll n,m;
    cin>>n>>m;
    multiset<ll>price;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       price.insert(x);
    }
    for(int i=0;i<m;i++){
       ll x;cin>>x;
       auto match = price.upper_bound(x);
       if(match==price.begin())cout<<-1<<endl;
       else{
            match--;
            cout<<*match<<endl;
            price.erase(match);
       }
       
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