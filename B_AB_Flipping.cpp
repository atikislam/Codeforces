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
    ll n,a=0,b=0,ans=0;
    cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i++){
       if(s[i]=='A'){
            a++;
       }else{
            ans+=a;
            if(ans>0)a=1;
       }
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