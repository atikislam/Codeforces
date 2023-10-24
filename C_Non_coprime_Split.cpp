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
    ll l,r,a,b;
    cin>>l>>r;
    a=r/2;
    b=a;
    if(l==r){
        for(int i=2;i*i<=l;i++){
           if(l%i==0){
                cout<<l-i<<" "<<i<<endl;
                return;
           }
        }
        cout<<-1<<endl;
    }else if(a>1){
        cout<<a<<" "<<b<<endl;
    }else{
        cout<<-1<<endl;
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