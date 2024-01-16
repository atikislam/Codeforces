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
    ll n,m,k,jSum=0;
    cin>>n>>m>>k;
    vector<ll>j_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       j_array.push_back(x);
    }
    vector<ll>g_array;
    for(int i=0;i<m;i++){
       ll x;cin>>x;
       g_array.push_back(x);
    }
    asort(j_array);
    asort(g_array);
    if(k&1){
        k = min(111LL,k);
    }else{
        k = min(110LL,k);
    }
    for(int i=1;i<=k;i++){
       if(i&1){
        if(g_array[m-1]>j_array[0]){
            swap(g_array[m-1],j_array[0]);
            asort(j_array);
            asort(g_array);
        }
       }else{
        if(j_array[n-1]>g_array[0]){
            swap(g_array[0],j_array[n-1]);
            asort(g_array);
            asort(j_array);
        }
       }
    }
    for(int i=0;i<n;i++){
       jSum+=j_array[i];
    }
    cout<<jSum<<endl;

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