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
    ll n,h,sum=0;
    cin>>n>>h;
    vector<ll>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       sum+=x;
       d_array.push_back(x);
    }
    gsort(d_array);
    if(sum<h)cout<<0<<endl;
    else{
        for(int i=0;i<n;i++){
           if(h>d_array[i]){
            h-=d_array[i];
           }else{
            cout<<d_array[i]<<endl;return;
           }
        }
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