#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<int>b(n-1),a(n);
    for(int i=0;i<n-1;i++){
       cin>>b[i];
       a[i]|=b[i];
       a[i+1]|=b[i];
    }
    for(int i=0;i<n-1;i++){
       if((a[i]&a[i+1])!=b[i]){
        cout<<-1<<endl;return;
       }
    }
    for(auto it:a)cout<<it<<" ";
    cout<<endl;

    

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