#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,countt=0;
    int a[]={5,4,3,2,1};
    cin>>x;
    for(int i=0;i<5;i++){
        countt+=x/a[i];
        x=x%a[i];
    }
    cout<<countt;
}
