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
    ll n,a,b,ans=0,zero=0,one=0;
    cin>>n>>a>>b;
    string s;cin>>s;
    ans+=n*a;
    if(b>0){
        ans+=n*b;
    }else{
        int min_del=1;
        for(int i=1;i<n;i++){
           if(s[i]!=s[i-1])min_del++;
        }
        min_del/=2;
        min_del++;
        ans+=min_del*b;
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