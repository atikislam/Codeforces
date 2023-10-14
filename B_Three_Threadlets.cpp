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
    ll ans=0;
    vector<ll>d_array;
    for(int i=0;i<3;i++){
       ll x;cin>>x;
       d_array.push_back(x);
    }
    
    asort(d_array);
    ans+=(d_array[1]/d_array[0])-1;
    ans+=(d_array[2]/d_array[0])-1;
    if(d_array[1]%d_array[0] == 0 && d_array[2]%d_array[0]==0 && ans<=3){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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