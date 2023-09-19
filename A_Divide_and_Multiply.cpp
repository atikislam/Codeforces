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
    ll n,cont_div=0,ans=0;
    cin>>n;
    vector<ll>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       while(x%2==0){
            x/=2;
            cont_div++;
        }
       d_array.push_back(x);
    }
    gsort(d_array);
    while(cont_div--){
        d_array[0]*=2;
    }
    for(int i=0;i<n;i++){
       ans+=d_array[i];
    }
    cout<<ans<<endl;
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