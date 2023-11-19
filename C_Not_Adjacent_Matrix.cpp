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
    ll n;
    cin>>n;
    if(n==2)cout<<-1<<endl;
    else if(n==1)cout<<1<<endl;
    else{
        int total=n*n,end_line=1;
        for(int i=1;i<=total;i+=2){
           cout<<i<<" ";
           if(end_line==n){
            cout<<endl;
            end_line=1;
           }else{
            end_line++;
           }
        }
        for(int i=2;i<=total;i+=2){
           cout<<i<<" ";
           if(end_line==n){
            cout<<endl;
            end_line=1;
           }else{
            end_line++;
           }
        }
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