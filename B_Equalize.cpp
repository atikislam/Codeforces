#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,ans=1;
    cin>>n;
    vector<int>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
    sort(d_array.begin(),d_array.end());
    d_array.erase(unique(d_array.begin(),d_array.end()),d_array.end());
    for(int i=0;i<(int)d_array.size();i++){
       int target=d_array[i]+n;
       int l=i,r=(int)d_array.size()-1;
       while(r-l>=0){
            int mid=l+(r-l)/2;
            if(d_array[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
            
       }
       ans=max(ans,(l-i));
    }
    
    cout<<ans<<endl;
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