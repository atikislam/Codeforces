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
    int ans=0;
    string s;cin>>s;
    string digits ="1234567890";
    int f=1,last=1;
    for(int i=0;i<4;i++){
        int si = s[i]=='0' ? 10 :s[i]-'0';
        if(si==1 && f){
            ans++;
            last=si;
            continue;
        }else f=0;
        ans++;
        ans+=abs(si-last);
        last=si;
    }
    cout<<ans<<endl;
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