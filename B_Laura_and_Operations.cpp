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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==b && a==c && b==c){
        cout<<1<<" "<<1<<" "<<1<<endl;
    }else if(a>=b && a>=c){
        cout<<1<<" "<<0<<" "<<0<<endl;
    }
    else if(b>=a && b>=c){
        cout<<0<<" "<<1<<" "<<0<<endl;
    }else{
        cout<<0<<" "<<0<<" "<<1<<endl;
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