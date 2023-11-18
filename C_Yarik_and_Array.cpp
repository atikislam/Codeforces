#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define abc "abcdefghijklmnopqrstuvwxyz"
#define asort(a) sort(a.begin(),a.end())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    int n;
    cin>>n;
    vector<int>d_array(n);
    for(int i=0;i<n;i++){
       cin>>d_array[i];
    }
    int sum=d_array[0],ans=d_array[0];
    for(int i=1;i<n;i++){
       if(sum<0)sum=0;
       if((d_array[i]&1) == (d_array[i-1]&1)){
           sum=d_array[i];
       }else{
            sum+=d_array[i];
       }
       ans=max(ans,sum);
    }
    cout<<ans<<endl;

}
int main() {
    Faster;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}