#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    int arr[n];
    long long sum=0;
    int f_odd=0,l_odd=0,f=1;
    for(int i=0;i<n;i++){
       cin>>arr[i];
       sum+=arr[i];
       if(arr[i]%2){
        if(f){
            f_odd=i;
            f=0;
        }
        l_odd=i; 
       }
    }
    if(sum%2){
        n=max(n-f_odd-1,l_odd);
    }
    cout<<n<<endl;

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