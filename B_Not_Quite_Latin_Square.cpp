#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    char arr[3][3];
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           cin>>arr[i][j];
       }
    }
    map<char,int>freq;
    
    for(int i=0;i<3;i++){
        freq['A']=0;
        freq['B']=0;
        freq['C']=0;
       for(int j=0;j<3;j++){
           if(arr[i][j]!='?'){
                freq[arr[i][j]]++;
           }
       } 
        if(freq['A']==0){
            cout<<"A"<<endl;break;
        }
        else if(freq['B']==0){
            cout<<"B"<<endl;break;
        }
        else if(freq['C']==0){
            cout<<"C"<<endl;break;
        }
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