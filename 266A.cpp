#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,g=0,b=0;
    cin>>n;
    char s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
         if(s[i]=='R'){
            r++;
        }else if(s[i]=='B'){
            b++;
        }else{
            g++;
        }
    }
    }

    cout<<r+g+b;


}
