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
   ll n;
   cin>>n;
   vector<ll>data,b,c;
   set<ll>d;
   for(int i=0;i<n;i++){
      ll x;cin>>x;
      data.push_back(x);
      d.insert(x);
   }
    asort(data);
    int temp=0;
   for(int i=0;i<n;i++){
      if(data[i]==data[i+1]){
        b.push_back(data[i]);
      }else{
        temp=i;
        break;
      }
   }
   for(int i=temp;i<n;i++){
      c.push_back(data[i]);
   }
    if(d.size()>1){
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0;i<b.size();i++){
           cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<c.size();i++){
           cout<<c[i]<<" ";
        }
    }else{
        cout<<-1;
    }
    cout<<endl;
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