#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long n,sum=0;
    cin>>n;
    vector<int>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
    set<long long int>s_data;
    long long sum_odd=0,sum_even=0;
    for(int i=1;i<=n;i++){
       if(i&1)sum_odd+=d_array[i-1];
       else sum_even+=d_array[i-1];
       if(s_data.count(sum_odd-sum_even) || sum_odd==sum_even){
            cout<<"YES"<<endl;return;
       }else{
            s_data.insert(sum_odd-sum_even);
       }
    }
    cout<<"NO"<<endl;
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