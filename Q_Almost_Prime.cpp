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
bool is_prime(int x){
    int divs=0;
    for(int i=1;i<=x;i++){
       if(x%i==0)divs++;
    }
    if(divs==2){
        return 1;
    }else{
        return 0;
    }
}
bool is_almost_prime(int n){
    int almost_div=0;
    for(int i=1;i<=n;i++){
       if(n%i==0 && is_prime(i))almost_div++;
    }
    if(almost_div==2){
        return 1;
    }else{
        return 0;
    }
}
void solve(){
    ll n,ans=0;cin>>n;
   for(int i=0;i<=n;i++){
      if(is_almost_prime(i)){
        ans++;
      }
   }
   cout<<ans<<endl;
}
int main() {
    Faster;
    //ll t;
    //cin>>t;
    //while(t--){
        //solve();
    //}
    solve();
   return 0;
}