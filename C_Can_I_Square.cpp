#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
     long long sum=0;
    for(int i=0;i<n;i++){
       double x;cin>>x;
       sum+=x;
    }
    double result =  sqrt(sum);
    long long int ans = result;
    if(ans*ans==(long long int)sum)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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