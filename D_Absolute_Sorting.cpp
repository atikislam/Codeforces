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
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define is_sort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    ll n,x;
    cin>>n;
    vector<ll>d_array,ans_data;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       d_array.push_back(x);
    }
    ll mn =0;
    ll mx = 1e9;
    for(int i=0;i<n-1;i++){
        if(d_array[i]>d_array[i+1]){
            ll x = (d_array[i]+d_array[i+1]+1)/2;
            mn=max(mn,x);
       }else if(d_array[i]<d_array[i+1]){
            ll x = (d_array[i]+d_array[i+1])/2;
            mx=min(mx,x);
       }
    }
    if(mx>=mn){
        cout<<mx<<endl;
    }else{
        cout<<-1<<endl;
    }
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