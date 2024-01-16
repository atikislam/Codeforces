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

int marked[1000001];
vector<int>primes;
void Sieve(){
    for(int i=2;i*i<=1000000;i++){
       if(!marked[i]){
        for(int j=i*i;j<=1000000;j+=i){
            marked[j]=1;
        }
       }
    }
    for(int i=2;i<=1000000;i++){
       if(!marked[i])primes.push_back(i);
    }
}

bool primeCheck(int x){
    int l=0,r=primes.size()-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(primes[mid]>x){
            r=mid-1;
        }else if(primes[mid]<x){
            l=mid+1;
        }else{
            return true;
        }
    }
    return false;
}
void solve(){
    Sieve();
    ll n;
    cin>>n;
    vector<ll>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       d_array.push_back(x);
    }
    for(int i=0;i<n;i++){
        ll sq = sqrt(d_array[i]);
        if( d_array[i]==sq*sq && primeCheck(sq)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
int main() {
    Faster;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}