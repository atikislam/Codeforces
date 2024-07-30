#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
void solve(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>arr[i][j];
       }
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        int mx=0;
           for(int k=0;k<4;k++){
              int row=i+dx[k];
              int col=j+dy[k];
              if(row>-1 && row<n && col>-1 && col<m){
                mx=max(mx,arr[row][col]);
              }
           }
           arr[i][j]=min(arr[i][j],mx);
       }
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cout<<arr[i][j]<<" ";
       }cout<<endl;
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