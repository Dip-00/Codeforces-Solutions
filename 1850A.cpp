#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c;
    int arr[3];
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;

        sort(arr,arr+3);

        if(arr[1]+arr[2]>=10){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;

        }
    }
}
