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
    ll n,ans=0;
    cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i++){
       ll temp=0;
       if(s[i]=='?'){
            temp++;
            for(int j=i+1;j<n;j++){
                if(s[i]!='?')break;
                else temp++;
            }
       }
       if(temp==1){
            ans++;
       }else if(temp==2){
            ans+=10;
       }
       else if(temp==3){
            ans+=111;
       }
       else if(temp==4){
            ans+=1111;
       }
       else if(temp==5){
            ans+=11111;
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