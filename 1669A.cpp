#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }

    for(int i=0;i<t;i++){
        if(a[i]<=1399){
            cout<<"Division 4"<<endl;
        }else if(a[i]>=1400 && a[i]<=1599){
            cout<<"Division 3"<<endl;
        }
        else if(a[i]>=1600 && a[i]<=1899){
            cout<<"Division 2"<<endl;
        }else{
            cout<<"Division 1"<<endl;

        }
    }


}

