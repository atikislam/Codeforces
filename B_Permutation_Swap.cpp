#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    int arr[n+1];
    int k=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        k=__gcd(k,abs(i-arr[i]));
    }
    cout<<k<<endl;
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