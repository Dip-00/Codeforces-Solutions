#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,sum=0;
    string s,ans="Timru";
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n;
        cin>>s;
        sort(s.begin(), s.end());
        if(s==ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}

