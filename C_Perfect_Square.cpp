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
    ll n,ans=0;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>arr[i][j];
       }
    }
    for(int i=0;i<n;i++){
        int cont=n-1;
       for(int j=0;j<n;j++){
            if(arr[i][j]<arr[cont][i]){
                ans+=arr[cont][i]-arr[i][j];
                arr[i][j]=arr[cont][i];
            }else if(arr[i][j]>arr[cont][i]){
                ans+=arr[i][j]-arr[cont][i];
                arr[cont][i]=arr[i][j];
            }
           cont--;
       }
    }
    for(int i=0;i<n;i++){
        int cont=n-1;
       for(int j=0;j<n;j++){
            if(arr[i][j]<arr[cont][i]){
                ans+=arr[cont][i]-arr[i][j];
                arr[i][j]=arr[cont][i];
            }else if(arr[i][j]>arr[cont][i]){
                ans+=arr[i][j]-arr[cont][i];
                arr[cont][i]=arr[i][j];
            }
           cont--;
       }
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