#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int len=s.size();
    int c=0;

    if(len<7){
        cout<<"NO";

    }else{
        for(int i=0;i<len;i++){
                if(s[i]==s[i+1]){
                    c++;
                }else{
                    if(c>=6){
                        cout<<"YES";
                        break;
                    }else{
                        c=0;
                    }
                }
        }
        if(c<6){
            cout<<"NO";
        }
    }

}




