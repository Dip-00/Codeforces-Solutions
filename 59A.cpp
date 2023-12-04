#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int c=0,d=0;

    for(int i=0;i<s.size();i++){
        if((int)s[i]>=65 && (int)s[i]<=90){
            c++;
        }
        else{
            d++;
        }
    }

    if(c>d){
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }else{
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }

    cout<<s;


}
