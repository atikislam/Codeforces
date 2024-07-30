#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,d;
    cin>>n>>d;
    vector<int>d_array(n);
    for(int i=0;i<n;i++){
       cin>>d_array[i];
    }
    sort(d_array.begin(),d_array.end());
    int l=0,r=n-1;
    int ans=0;
    int power=d_array[r];
    while(l<=r){
        if(power>d){
            ans++;
            r--;
            power=d_array[r];
        }else{
            power+=d_array[r];
            l++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}