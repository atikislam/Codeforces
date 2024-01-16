#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define abc "abcdefghijklmnopqrstuvwxyz"
#define asort(a) sort(a.begin(),a.end())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    ll n,chef=0,chefina=0;
    cin>>n;
    string A;cin>>A;
    string B;cin>>B;
    for(int i=0;i<n;i++){
           if(A[i]=='R' && B[i]=='S')chef++;
           else if(A[i]=='S' && B[i]=='P')chef++;
           else if(A[i]=='P' && B[i]=='R')chef++;
           else if(B[i]=='R' && A[i]=='S')chefina++;
           else if(B[i]=='S' && A[i]=='P')chefina++;
           else if(B[i]=='P' && A[i]=='R')chefina++;
        }
    if(chef==chefina)cout<<1<<endl;
    else if(chef>chefina)cout<<0<<endl;
    else{
        int ans=0;
        while(chef<=chefina){
            chef++;
            chefina--;
            ans++;
        }
        cout<<ans<<endl;
    }


}
int main() {
    Faster;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}