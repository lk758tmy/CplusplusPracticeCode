#include <iostream>
#include <cstring>
//高精度加法 
using namespace std;
int s[1000],a[1000],b[1000];
string x,y;
int main(){
    cin>>x>>y;
    for(int i=0,j=x.size()-1;j>-1;i++,j--) a[i]=x[j]-'0';
    for(int i=0,j=y.size()-1;j>-1;i++,j--) b[i]=y[j]-'0';
    int t=0,tmp;
    while(!(!a[t]&&!b[t]&&!s[t])){
        tmp=a[t]+b[t]+s[t];
        if(tmp<10) s[t]=tmp;
        else{
            s[t]=tmp-10;
            s[t+1]=1;
        }
        t++;
    }
    for(int i=t-1;i>-1;i--) cout<<s[i];
    system("pause");
    return 0;
}
