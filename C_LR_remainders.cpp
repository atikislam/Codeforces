#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,m;
    cin>>n>>m;
    vector<long long>d_array;
    for(int i=0;i<n;i++){
       long long x;cin>>x;
       d_array.push_back(x%m);
    }
    string s;cin>>s;
    vector<int>reorder;
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            reorder.push_back(d_array[l]);
            l++;
        }else{
            reorder.push_back(d_array[r]);
            r--;
        }
    }
    vector<int>ans(n);
    long long suff_product=1;
    for(int i=n-1;i>=0;i--){
        ans[i]=(suff_product*reorder[i])%m;
        suff_product=ans[i];
    }
    for(auto it:ans)cout<<it<<" ";
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