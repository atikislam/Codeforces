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
bool primeCheck(int x){
   if(x==2 || x==3){
       return true;
   }
   else if(x%2==0 || x<2){
       return false;
   }
   for(int i=3;i<=sqrt(x);i+=2){
      if(x%i==0){
       return false;
      }
   }
   return true;
}
int main() {
    Faster;
    ll t=1;
    cin>>t;
    while(t--){
        int n;cin>>n;
        bool ans =primeCheck(n);
        if(ans)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}