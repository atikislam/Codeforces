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
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    ll n,f1=1e9,f2=1e9,ans1=0,ans2=0;
    cin>>n;
    vector<ll>d_array1,d_array2;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       f1=min(f1,x);
       ans1+=x;
    }
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       f2=min(f2,x);
       ans2+=x;
    }
    ans1+=f2*n;
    ans2+=f1*n;
    cout<<min(ans1,ans2)<<endl;
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