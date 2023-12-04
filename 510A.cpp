#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,x;

    cin>>r>>c;

    for(int i=1;i<=r;i++){

        for(int j=1;j<=c;j++){
            if(i%2!=0){
                cout<<"#";
            }

            else{
                x=i/2;
                if(x%2!=0 && j==c){
                    cout<<"#";
                }else if(x%2==0 && j==1){
                    cout<<"#";
                }else{
                    cout<<".";
                }


            }


        }
        cout<<endl;

    }
}




