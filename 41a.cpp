#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    int j=0;
    getline(cin,s);
    getline(cin,t);
    string d=s;


    for(int i=s.size()-1;i>=0;i--){
        d[j]=s[i];
        j++;
    }


    if(t==d){
        cout<<"YES";
    }else{
        cout<<"NO";

    }



}

