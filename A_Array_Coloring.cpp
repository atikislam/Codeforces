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
   ll n,ans=0;
   cin>>n;
   for(int i=0;i<n;i++){
      int x;cin>>x;
        ans+=x;
   }
   if(ans%2==0){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}
int main() {
    Faster;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    //solve();
   return 0;
}