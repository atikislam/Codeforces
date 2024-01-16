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
    int op=0,cl=0,c=0;
    string s;cin>>s;
    int n=s.size();
    string braket_seq=s;
    for(int i=0;i<n;i++){
       if(braket_seq[i]==s[0]){
        braket_seq[i]='(';
        op++;
       }
       else if(braket_seq[i]==s[n-1]){
        braket_seq[i]=')';
        cl++;
       }
    }
    char replace='C';
    if(s[0]=='A' && s[n-1]=='C' || s[n-1]=='A' && s[0]=='C' )replace='B';
    else if(s[0]=='B' && s[n-1]=='C' || s[n-1]=='B' && s[0]=='C')replace='A';
    if(op<cl){
        for(int i=0;i<n;i++){
           if(braket_seq[i]==replace)braket_seq[i]='(';
        }
    }else{
        for(int i=0;i<n;i++){
           if(braket_seq[i]==replace)braket_seq[i]=')';
        }
    }

    if(braket_seq[0]!='(' || braket_seq[n-1]!=')') {
        cout<<"NO"<<endl;
        return;
    }else{
        stack<char> s;
        for (int i = 0; i <n; i++) {
            if (braket_seq[i] == '(') {
                s.push(braket_seq[i]);
            } else if (braket_seq[i] == ')') {
                if (s.empty()) {
                    cout<<"NO"<<endl;return;
                } else {
                    s.pop();  
                }
            }
        }
        if(s.empty())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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