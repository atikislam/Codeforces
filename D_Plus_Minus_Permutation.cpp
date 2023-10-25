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
    ll n,x,y,a,b,lcm,sum,ans,common;
    cin>>n>>x>>y;
    sum=(n*(n+1))/2;
    lcm = x*y/ __gcd(x,y);
    a=n/x;b=n/y; // multiples of x & y
    common=n/lcm; // Common Multiples
    a-=common;b-=common; // minus Common multiples 
    ans=sum-((n-a)*(n-a+1))/2; // sum of n-x to n
    ans-=(b*(b+1))/2; // sum of 1 to y 
    cout<<ans<<endl;
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