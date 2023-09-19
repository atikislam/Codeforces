#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 long long ans = -1e8;
    for(int i=0;i<n;i++){
        long long sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            ans=max(sum,ans);
         }
    }
    cout<<ans<<endl;


}
