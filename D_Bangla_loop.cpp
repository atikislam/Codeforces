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
    ll n,q;cin>>n>>q;
    vector<ll>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       if(i!=0){
            d_array.push_back(d_array[i-1]+x);
       }else{
            d_array.push_back(x);
       }
    }
    while(q--){
        int x,y;cin>>x>>y;
        if(x==1) cout<<d_array[y-1]<<endl;
        else cout<<d_array[y-1]-d_array[x-2]<<endl;
    }

}
int main() {
    Faster;
    solve();
    return 0;
}