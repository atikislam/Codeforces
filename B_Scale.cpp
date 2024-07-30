#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,k;
    cin>>n>>k;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k){
           cout<<arr[i][j];
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