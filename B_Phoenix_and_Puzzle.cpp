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
set<ll>set_data;
void solve(){
    ll n;
    cin>>n;
    if(set_data.count(n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main() {
    Faster;
    for(ll i=1;i*i<=1e9;i++){
        set_data.insert(i*i*2);// For 2 base 
        set_data.insert(i*i*4); // For 4 base 
    }
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}