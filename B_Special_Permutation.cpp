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
    int arr[101];
    for(int i=1;i<=100;i++){
       arr[i]=i;
    }
    ll n,a,b;
    cin>>n>>a>>b;
    if(n-a>b){
        cout<<-1<<endl;
    }else if(a<b){
        cout<<a<<" ";
        ll contuer=(n+a)/2;
        for(int i=n;i>contuer;i--){
            if(i!=b){
                cout<<i<<" ";
            }else{
                contuer--;
            }
        }
        cout<<endl;
        
    }else{
        cout<<a<<" ";
        for(int i=n;i>0;i--){
            if(i!=a){
                cout<<i<<" ";
            }
        }
        cout<<endl;
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