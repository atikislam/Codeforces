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
#define gsort(a) sort(v.begin(),v.end(),greater<int>())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
   long long int n,sum=0,q=0;
   cin>>n;
   int tmp=0,mn=0;
   for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        if(x<0){
            if(tmp==0)q++;
            sum+=x*-1;tmp++;
            mn++;
        }else if(x==0){
            tmp++;
        }
        else{
            sum+=x;
            if(x>0 && tmp>0)q++;
        }
   }
   if(tmp==1)q--;
   if(tmp==n){
    if(mn%2==0){
        q=0;
    }else{
        q=1;
    }
   }
   cout<<sum<<" "<<q<<endl;
}
int main() {
    Faster;
    int t;
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
