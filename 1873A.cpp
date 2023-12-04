#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>s;
            if(s=="abc" || s=="cba"){
                cout<<"YES"<<endl;
            }else{
                if(s[0]=='b' && s[1]=='a' || s[0]=='a' && s[1]=='c'){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }

            }

        }
    }









