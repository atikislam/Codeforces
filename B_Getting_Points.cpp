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
    ll n,p,l,task,earn=0;
    cin>>n>>p>>l>>task;
    ll max_task=(n+6)/7;
    for(ll i=1;i<=n;i++){
        earn+=l;
        if(max_task>0){
            earn+=task+task;
            max_task-=2;
        }
        if(earn>=p){
            cout<<n-i<<endl;return;
       }
    }
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