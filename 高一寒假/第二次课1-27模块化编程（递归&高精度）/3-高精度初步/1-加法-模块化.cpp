#include <iostream>
#include <cstring>
#include <memory.h>
//高精度加法 
using namespace std;
int add(string x,string y,int s[]){
	int len=max(x.size(),y.size())+1;
	int a[len],b[len];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	
    for(int i=0,j=x.size()-1;j>-1;i++,j--) a[i]=x[j]-'0';
    for(int i=0,j=y.size()-1;j>-1;i++,j--) b[i]=y[j]-'0';
    int t=0,tmp;
    while(t<len-1){
        tmp=a[t]+b[t]+s[t];
        if(tmp<10) s[t]=tmp;
        else{
            s[t]=tmp-10;
            s[t+1]=1;
        }
        t++;
    }

    return len-1;
}
int main(){
    int s[1001];
	memset(s,0,sizeof(s));
	string x,y;
	int t;
	cin>>x>>y;
	t=add(x,y,s);
	if(s[t]!=0) cout<<s[t];
	for(int i=t-1;i>-1;i--){
        cout<<s[i];
	}
	return 0;
}
