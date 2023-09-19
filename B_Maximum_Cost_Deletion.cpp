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
   ll n,a,b,ans=0,zero=1;
   cin>>n>>a>>b;
   string s;cin>>s;
   if(a<0 && b>=0){
    cout<<(b+a)*n<<endl;
   }else{
        int temp=1,f=0;
        for(int i=0;i<n-1;i++){
           if(s[i]=='0' && s[i+1]=='0'){
            zero++;
            temp++;
            f=1;
           }else if(f){
            ans+=(a*temp)+b;
            temp=1;f=0;
           }
        }
        if(ans==0){
            ans+=(a*temp)+b;
            cout<<ans<<endl;
        }else{
            n-=zero;
            ans+=(a*n)+(b);
            cout<<ans<<endl;
        }
        
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