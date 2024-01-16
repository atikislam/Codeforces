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
    ll x,y,k,ans=0;
    cin>>x>>y>>k;
    ans=x;
    int temp = y-x;
    if(x>=y)ans=x;
    else if(temp<=k){
        ans+=temp;
    }else{
        ans+=k;
        temp-=k;
        ans+=temp*2;
    }
    cout<<ans<<endl;
}
int main() {
    Faster;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}