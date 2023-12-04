#include<bits/stdc++.h>
using namespace std;
int main(){
    long int k,n,w,total=0,ans=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        total=total+(k*i);
    }

    ans=total-n;
    if(ans<=0){
        cout<<0;
    }else{
        cout<<ans;
    }

}

