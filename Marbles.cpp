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
    int a,b,ans=0;
    cin>>a>>b;
    int aa=a,bb=b,ans2=0;
    if(a%b==0){
        cout<<0<<endl;return;
    }
    while(a%b!=0){
        ans++;
        a++;
        b--;
    }
    if(bb>aa){
        cout<<ans<<endl;return;
    }
    while(aa%bb!=0){
        ans2++;
        aa--;
        bb++;
    }
    cout<<min(ans,ans2)<<endl;
    
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