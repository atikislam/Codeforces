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
   ll n,nn,xtmp;
   cin>>n;
   nn=n*(n-1)/2;
   set<ll>data;
   for(int i=0;i<nn;i++){
      int x;cin>>x;
      xtmp=x;
      data.insert(x);
   }
   if(data.size()==1){
    for(int i=0;i<n;i++){
       cout<<xtmp<<" ";
    }
    cout<<endl;
    return;
   }
   if(n<=data.size()){
    set<ll>::iterator it;
    for(it = data.begin();it!=data.end();it++){
       cout<<*it<<" ";
    }
   }else if(data.size()<n){
    set<ll>::iterator it;
    ll tmp=0,mxn=0;
    for(it = data.begin();it!=data.end();it++){
       cout<<*it<<" ";
       mxn=*it;
       tmp++;
    }
    for(int i=1;i<=n-tmp;i++){
       cout<<mxn+i<<" ";
    }
    cout<<endl;
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