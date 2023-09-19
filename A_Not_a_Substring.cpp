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
ll cont=0;
void solve(){
   ll f=0;
   string s,ans="";cin>>s;

   for(int i=0;i<s.size();i++){
      if(s[i]==')' && s[i-1]!='('){
        ans+='(';
        ans+=s[i];
        f++;
      }else if(s[i]=='(' && s[i+1]!=')'){
        ans+='(';
        ans+=')';
        f++;
      }else{
        ans+=s[i];
      }
   }
   if(f==0){
    cout<<"NO"<<endl;
   }else{
    cout<<"YES"<<endl;
    cout<<"((()";
    cout<<ans;
    for(int k=0;k<cont;k++){
       cout<<"()";
    }
    cout<<")())"<<endl;
    cont++;
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