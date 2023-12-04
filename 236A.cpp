#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   int c=1;
   getline(cin,s);
   int l=s.length();
   sort(s.begin(),s.end());
   for(int i=1;i<l;i++){
        if(s[i]!=s[i-1])
            c++;
   }
   if(c%2==0){
    cout<<"CHAT WITH HER!";
   }else{
       cout<<"IGNORE HIM!";
   }

}


