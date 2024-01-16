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
    int n,ans=0;
    cin>>n;
    string s;cin>>s;
    int count=0;
    for(int i=0;i<n;i++){
       if(s[i]=='.'){
        count++;
        ans++;
       }else if(count>2){
            cout<<2<<endl;return;
       }else count=0;
    }
    if(count>2)cout<<2<<endl;
    else cout<<ans<<endl;
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