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
#define rsort(a) sort(a.rbegin(),a.rend())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    ll ans=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            ans++;
            s[i]='B';s[i+1]='C';
            if(i>0){
                i-=2;
            }
        }else if(s[i]=='B' && s[i+1]=='A'){
            ans++;
            s[i]='C';s[i+1]='B';
            i--;
        }
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