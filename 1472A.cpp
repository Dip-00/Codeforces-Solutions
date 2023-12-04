#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long w,h,n;
    long long countt=1;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>w>>h>>n;

        if(n == 1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        while(w%2==0)
        {
            w=w/2;
            countt*=2;
        }
        while(h%2==0)
        {
            h=h/2;
            countt*=2;
        }
        if(countt>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        countt=1;
    }
}
