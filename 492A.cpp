#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b=0,c=0,sum=0;
    cin>>n;


    for(int i=1;i<=n;i++){
        b=b+i;
        sum=sum+b;
        if(sum<=n){
            c++;
        }else{
            break;

        }

    }

    cout<<c;
}



