#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,X=0;
   cin>>n;
   string a[n];

   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   for(int i=0;i<n;i++){
    if(a[i]=="++X"||a[i]=="X++"){
        X++;
    }
    if(a[i]=="--X"||a[i]=="X--"){
        X--;

    }
   }

   cout<<X;

}


