#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    double len=s.size();
    int l=ceil(len/2);
    int a[l];
    int j=0;

    for(int i=0;i<s.size();i+=2){
        a[j]= (int)(s[i]);
        j++;

    }

    sort(a,a+l);
    j=0;


    for(int i=0;i<s.size();i+=2){
        s[i]=(char)a[j];
        j++;

    }

    cout<<s;

}
