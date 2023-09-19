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
#define areverse(a) reverse(a.begin(),a.end())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
   ll n;
   cin>>n;
   vector<ll>odd,evn,evcounter(n),data;
   for(int i=0;i<n;i++){
      int x;cin>>x;
      if(x%2==0){
        evn.push_back(x);
        evcounter[i]=1;
      }else{
        odd.push_back(x);
      }
   }
   gsort(odd);
   gsort(evn);
   for(int i=0;i<n;i++){
      if(evcounter[i]==1){
         data.push_back(evn[evn.size()-1]);
         evn.pop_back();
      }else{
         data.push_back(odd[odd.size()-1]);
         odd.pop_back();
      }
   }
   if(issort(data)){
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
/*
* do something instead of nothing and stay organized
* WRITE STUFF DOWN
* DON'T GET STUCK ON ONE APPROACH
*/
/* Final check before submit :
1. array size or integer overflow,like uninitialised 0 index.
2. Think twice,code once.check all possible counter test case.
3. Be careful about corner case! n=1?k=1? something about 0?
4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?
5. if got WA than remember that you are missing something common.
* Be confident!!! who knows? may be your one step back to AC *
4. minus mod ans=(ans-k+mod)%mod;
*/
/* IF WA???
1. corner case! n=1?k=1? something about 0?
2. check code(avoid stupid mistake)
3. read the statement again(if there any missing point???)
4. check the idea(check all possible counter test case again!!!)
5. be calm,don't be panic!!!.(**this problem not going to decide your future**)
6. don't waste too much time. move to next problem
*/