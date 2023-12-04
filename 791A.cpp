#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,countt=0;
    cin>>a>>b;
    if(a>b){
        countt=0;
    }
    else{
        while(a<=b){
            a=a*3;
            b=b*2;
            countt++;

        }

    }
    cout<<countt;

}
