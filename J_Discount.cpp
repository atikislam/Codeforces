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
   ll a,b,dis;
   cin>>a>>b;
   dis=a-b;
   double disp=(double)dis/a*100;
   cout<<fixed<<setprecision(3)<<disp<<endl;
}
int main() {
    Faster;
    // ll t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
   return 0;
}