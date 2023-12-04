#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s[t];
    string r,l;

    for(int i=0;i<t;i++){
        cin>>s[i];
    }

    for(int i=0;i<t;i++){
        if(s[i].size()%2!=0){
            cout<<"NO"<<endl;
        }else{
            l=s[i].substr(0,(s[i].size()/2));
            r=s[i].substr(s[i].size()/2,s[i].size());
            if(l==r){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;

            }

        }
    }

}
