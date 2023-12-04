#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e=0,o=0,x,y;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            e++;
            x=i;
        }else{
            o++;
            y=i;
        }
    }
    if(o>e){
        cout<<x<<endl;
    }else{
        cout<<y<<endl;
    }
}
