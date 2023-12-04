#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    int arr[3];

        cin>>x1>>x2>>x3;
        arr[0]=x1;
        arr[1]=x2;
        arr[2]=x3;

        sort(arr,arr+3);

        cout<<(arr[2]-arr[1]) + (arr[1]-arr[0]);

}

