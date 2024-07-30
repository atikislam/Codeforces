#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long a,b;
    cin>>a>>b;
    long long x,y;
    if(a%2==0 && (a/2)+(b*2)!=a+b){
        cout<<"Yes"<<endl;return;
    }else if(b%2==0 && (b/2)+(a*2)!=a+b){
        cout<<"Yes"<<endl;return;
    }
    cout<<"No"<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}