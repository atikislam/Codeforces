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
   ll n,m,ans=1,cont=0;
   cin>>n>>m;
   for(int i=0;i<m;i++){
      string s;cin>>s;
      for(int j=0;j<s.size() && ans;j++){
         if(cont==0 && ans){
            if(s[j]=='v')ans=1;
            else if(s[j]=='i' || s[j]=='k' || s[j]=='a'){
                ans=0;
            }
            cont++;
         }else if(cont==1 && ans){
            if(s[j]=='i')ans=1;
            else if(s[j]=='k' || s[j]=='a'){
                ans=0;
            }
            cont++;
         }
         else if(cont==2 && ans){
            if(s[j]=='k')ans=1;
            else if(s[j]=='a'){
                ans=0;
            }
            cont++;
         }else if(cont==3 && ans){
            if(s[j]=='a')ans=1;
         }else{
            ans=0;
         }
      }
   }
   cout<<ans;
   if(ans){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
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