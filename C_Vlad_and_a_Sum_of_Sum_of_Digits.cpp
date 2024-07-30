#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx_size=2e5+7;
int dp[mx_size];
void solve(){
    int n;
    cin>>n;
    cout<<dp[n]<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long sum=0;
    for(int i=1;i<mx_size;i++){
       int num=i;
       while(num!=0){
            sum+=num%10;
            num/=10;
       }
       dp[i]=sum;
    }
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}