#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<int>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
    map<char,int>freq;
    for(char i='a';i<='z';i++){
       freq[i]=0;
    }
    for(int i=0;i<n;i++){
       for(auto it:freq){
        if(it.second==d_array[i]){
            cout<<it.first;
            freq[it.first]++;
            break;
        }
    }
    }
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