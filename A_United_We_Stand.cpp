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
    ll n;
    cin>>n;
    vector<ll>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       d_array.push_back(x);
    }
    asort(d_array);
    int c=1;
    for(int i=n-2;i>=0;i--){
       if(d_array[n-1]==d_array[i])c++;
       else break;
    }
    if(c==n)cout<<-1<<endl;
    else{
      cout<<n-c<<" "<<c<<endl;
      for(int i=0;i<n-c;i++){
         cout<<d_array[i]<<" ";
      }
      cout<<endl;
      for(int i=n-c;i<n;i++){
         cout<<d_array[i]<<" ";
      }
      cout<<endl;
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