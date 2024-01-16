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
    ll d,e;
    cin>>d>>e;
    int d1,d2;
    cin>>d1>>d2;
    d+=d1;
    e+=d2;
    if(d>e){
        cout<<"Dominater"<<endl;
    }else{
        cout<<"Everule"<<endl;
    }


}
int main() {
    Faster;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}