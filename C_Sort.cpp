#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,q;
    cin>>n>>q;
    string a,b;cin>>a>>b;
    int arr_a[n+1][26]={0},arr_b[n+1][26]={0};
    for(int i=1;i<=n;i++){
       arr_a[i][a[i-1]-'a']++;
       arr_b[i][b[i-1]-'a']++;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<26;j++){
           arr_a[i][j]+=arr_a[i-1][j];
           arr_b[i][j]+=arr_b[i-1][j];
        }
    }
    int l,r,ans;
    while(q--){
        ans=0;
        cin>>l>>r;
        for(int c=0;c<26;c++){
            int v1=arr_a[r][c]-arr_a[l-1][c];
            int v2=arr_b[r][c]-arr_b[l-1][c];
          ans+=abs(v1-v2);
        }
        cout<<ans/2<<endl;

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