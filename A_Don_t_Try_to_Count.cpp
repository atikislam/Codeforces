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
    ll n,m,f=0;
    cin>>n>>m;
    string x,s;cin>>x>>s;
    int ans=0;
    if(x.find(s)!= string::npos){
            cout<<0<<endl;
            return;
    }
    while(n<m){
        x+=x;
        ans++;
        n+=n;
        if(x.find(s)!=-1){
            cout<<ans<<endl;
            return;
        }
    }
    x+=x;
    if(x.find(s)!= string::npos){
        cout<<ans+1<<endl;return;
    }
    if(f){
        cout<<ans<<endl;
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