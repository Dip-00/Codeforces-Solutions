#include<bits/stdc++.h>
using namespace std;



int cal(int n,int a,int countt){
    if(n>0)
    {
        n=n-a;
        countt++;

    }

    cal(n,a,countt);

    return countt;

}

int cal_2(int m,int a,int count_2){
    if(m>0)
    {
        m=m-a;
        count_2++;

    }

    cal_2(m,a,count_2);
    return count_2;
}


int main()
{
    int n,m,a;
    int countt=0;
    int count_2=0;
    cin>>n>>m>>a;
    cal(n,a,countt);
    count_2=count_2+countt;
    cal_2(m,a,count_2);



}
