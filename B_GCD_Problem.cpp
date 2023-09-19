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
bool primeCheck(int x){
    if(x==0 || x==1){
        return false;
    }
    for(int i=2;i<=x/2;i++){
       if(x%i==0){
        return false;
       }
    }
    return true;
}
void solve(){
    ll n,a,b,c;
    cin>>n;
    if(n&1){
        ll temp=2;
        n--;
        while(temp){ 
            temp++;
            if(primeCheck(temp) && (n-temp)%temp){
                cout<<temp<<" "<<n-temp<<" "<<1<<endl;
                return;
            }
        }
    }else{
        cout<<2<<" "<<n-3<<" "<<1<<endl;
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