#include <iostream>
#include <cstring>
#include <memory.h>
//高精度乘法 
using namespace std;
int exp(string x,int y,int left,int s[]){
	int len=x.size()+1;
	int a[len];
	memset(a,0,sizeof(a));
	
    for(int i=0,j=x.size()-1;j>-1;i++,j--) a[i]=x[j]-'0';
    int t=0,tmp,i=left;
    while(t<len){
//顶头一位可能不是一位数，故再进行一次进位判断,此处不是t<len-1 
        tmp=a[t]*y+s[i];
        if(tmp<10) s[i]=tmp;
        else{
            s[i]=tmp%10;
            s[i+1]+=tmp/10;
        }
        t++;
        i++;
    }
    return len+left-1;
}
int exp_main(string x,string y,int s[]){
	int k;
	for(int i=y.size()-1,t=0;i>-1;i--,t++)
		k=exp(x,y[i]-'0',t,s);
	return x.size()+y.size();
}
int main(){
	int s[1001];
	memset(s,0,sizeof(s));
	string x,y;
	int t;
	cin>>x>>y;
	
	bool flag=false;
	t=exp_main(x,y,s);
	for(int i=t;i>-1;i--){
		if(s[i]!=0||flag==true){
            cout<<s[i];
            flag=true;
        }
	}
	return 0;
}
