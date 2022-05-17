#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin>>t;
    while(t--){
        int c ,n ,m;
        cin>>n>>c>>m;
        int cnt,rem,st;
        
     cnt=0;
     rem=0;
     st=n/c;
    while(st>0)
    {
        cnt+=st;
        int x=st;
        int w=((x+rem)/m);
        rem=(x+rem)%m;
        st=w;
    }
    cout<< cnt<<endl;
}
    
}
