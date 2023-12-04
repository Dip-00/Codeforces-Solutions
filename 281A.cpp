#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);

    for(int i=0;i<a.length();i+=1){
            if(((int)a[i])>=97 ){
                    a[i]= ((int)a[i])-32;

            }
            break;
    }
    cout<<a;
}







