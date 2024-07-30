#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    
    if(x==1 && (k==1 || (k==2 && (n%2)))){
        cout<<"NO"<<endl;return;
    }
    cout<<"YES"<<endl;
    if(x!=1){
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }cout<<endl;
    }else{
        cout<<n/2<<endl;
        if(n%2){
            cout<<3<<" ";
            n-=3;
        }
        for(int i=0;i<n;i+=2){
        cout<<2<<" ";
        }cout<<endl;
    }
    
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