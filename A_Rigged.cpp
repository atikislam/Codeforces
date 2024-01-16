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
    ll n,w,ans,result=1;
    cin>>n;
    ll a,b;
    cin>>a>>b;
    w=a;
    ans=b;
    for(int i=1;i<n;i++){
       ll x,y;
       cin>>x>>y;
       if(x>=w && y>=ans && result ==1){
            result=-1;
       }
    }
    if(result==-1){
        cout<<-1<<endl;
    }else{
         cout<<w<<endl;
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