#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c;
    int arr[3];
    int n = sizeof(arr)-1;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;

        sort(arr,arr+3);
        cout<<arr[1]<<endl;

    }
}


