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
    ll n,m,t_check=1,s_check=1;
    cin>>n>>m;
    string s,t;cin>>s>>t;
    for(int i=0;i<m-1;i++){
        if(t[i]==t[i+1]){
        t_check=0;
        }
    }
    for(int i=0;i<n-1;i++){
       if(s[i]==s[i+1] && t_check==0){
        cout<<"No"<<endl;return;
       }else if(s[i]==s[i+1] && s[i]==t[0]){
        cout<<"No"<<endl;return;
       }else if(s[i]==s[i+1] && s[i+1]==t[m-1]){
        cout<<"No"<<endl;return;
       }
    }
    cout<<"Yes"<<endl;
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