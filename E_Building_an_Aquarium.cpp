#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long n,x;
    cin>>n>>x;
    vector<int>height(n);
    for(int i=0;i<n;i++){
       cin>>height[i];
    }
    
    long long lowest=0,highest=1e10+7,mid,sum;

    while(highest-lowest>-1){
        mid=lowest+(highest-lowest)/2;
        sum=0;
        for(int i=0;i<n;i++){
            if(mid-height[i]>0)sum+=mid-height[i];
        }
        if(sum<=x)lowest=mid+1;
        else highest = mid-1;
    }
    cout<<lowest-1<<endl;
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