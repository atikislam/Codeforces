#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define INF 100000000
#define abc "abcdefghijklmnopqrstuvwxyz"
#define ABC "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define PI 3.1415926535897932384626433832795
//define sort function
#define asort(a) sort(a.begin(),a.end())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    int n,ans=0;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
       arr[i]=i;
    }
    
    for(int i=n-1;i>0;i--){
       sort(arr+i,arr+n+1,greater<int>());
       int mx=0,temp=0;
       for(int j=1;j<=n;j++){
            temp+=arr[j]*j;
            mx=max(mx,arr[j]*j);
        }
        temp-=mx;
        ans=max(ans,temp);
    }
    
    cout<<ans<<endl;

}
int main() {
    Faster;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}