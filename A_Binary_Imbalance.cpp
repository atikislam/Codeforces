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
    int n;cin>>n;
    int one=0,zero=0;
    string s;cin>>s;
    for(int i=0;i<n;i++){
       if(s[i]=='0')zero++;
       else one++;
    }
    if(one==n)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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