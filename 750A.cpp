#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,sum=0,c=0;
    cin>>n>>k;


    for(int i=1;i<=n;i++){
        sum=sum+(i*5);
        if(1200+k+sum>1440){
            break;
        }else{
            c++;
        }
    }
    cout<<c;

}





