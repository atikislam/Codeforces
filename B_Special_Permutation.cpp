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
    ll n,a,b;
    cin>>n>>a>>b;
    int half = n/2;
    if(a<=half && b<=half || a>half && b>half || a>half && abs(a-b)>1)cout<<-1<<endl;
    else{
        vector<int>ans;
        for(int i=1;i<=n;i++){
           if(i!=a && i!=b){
            ans.push_back(i);
           }
        }
        cout<<a<<" ";
        for(int i=n-3;i>=0;i--){
           cout<<ans[i]<<" ";
        }
        cout<<b<<" "<<endl;
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