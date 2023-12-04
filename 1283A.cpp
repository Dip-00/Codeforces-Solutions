#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,h,m,m2;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>h>>m;
        m2=(h*60)+m;
        cout<<1440-m2<<endl;
    }
}



