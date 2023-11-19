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
    ll n,k,b=0;
    cin>>n>>k;
    string s;cin>>s;
    for(int i=0;i<n;i++){
       if(s[i]=='B'){
        b++;
       }

    }
    if(k==b)cout<<0<<endl;
    else if(k>b){
        cout<<1<<endl;
        int i;
        for(i=0;i<n && b<k;i++){
           if(s[i]=='A')b++;
        }
        cout<<i<<" "<<"B"<<endl;
    }else{
        cout<<1<<endl;
        int i;
        for(i=0;i<n && b>k;i++){
           if(s[i]=='B')b--;
        }
        cout<<i<<" "<<"A"<<endl;
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