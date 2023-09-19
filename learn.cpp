#include<iostream>
using namespace std;
    int main(){
        char user[100];
        cin.getline(user, 100);
        int l=0,i=0,counter=0;
        while(user[i]!='\0'){
                if(user[i] !='0'){
                    for(int j=i+1; user[j]!='0';j++){
                        if(user[i]==user[j]){
                            user[j]='0';
                            counter++;
                        }
                    }
                }
            i++;
        }

        cout<<user[0];
        cout<<counter;
        /*if(l%2==0){
           cout<<"CHAT WITH HER!";
        }
        else{
          cout<<"IGNORE HIM!";
        }*/
    }
