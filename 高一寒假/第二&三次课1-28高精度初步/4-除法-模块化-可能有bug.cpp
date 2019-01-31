#include <iostream>
#include <cstring>
#include <memory.h>
using namespace std;
int divi(string x,string y,int s[]){
    int a[x.size()+1],b[y.size()+1],i,j,k,cnt,t=0;
    memset(a,0,sizeof(a));
	memset(b,0,sizeof(b)); 
    for(i=0;i<x.size();i++) a[i]=x[i]-'0';
    for(i=0;i<y.size();i++) b[i]=y[i]-'0';

    for(i=y.size()-1;i<x.size();i++){
        for(j=0;j<t;j++){
            a[j+1]+=a[j]*10;
            a[j]=0;
        }
        
        cnt=-1;
        while(a[t]>-1){
            for(j=i,k=y.size()-1;j>=t/*,k>-1*/;j--,k--){
                a[j]-=b[k];
                if(a[j]<0&&j!=t){
                    a[j]+=10;
                    a[j-1]--;
                }     
		    }
            cnt++;
        }

        for(j=i,k=y.size()-1;j>=t;j--,k--){
            a[j]+=b[k];
            if(a[j]>9){
                a[j]-=10;
                a[j-1]++;
            }  
		}
        s[t]=cnt;
        t++;
    }
    
	for(i=0;i<x.size()-1;i++){
    	a[i+1]+=a[i]*10;
        a[i]=0;
    }
    return a[x.size()-1];
}//x>y ·µ»ØÓàÊý 
int main() {
    string x,y;
    int t;
    cin>>x>>y;
    
    if(x.size()<y.size()||(x.size()==y.size()&&x<y)){
        cout<<0<<' '<<y;
        return 0;
    }
    
    int s[x.size()];
    memset(s,-1,sizeof(s));
    t=divi(x,y,s);
    int i;
    for(i=0;s[i]==0;i++){}
    for(;s[i]!=-1&&i<x.size();i++)
        cout<<s[i];
    cout<<' '<<t;
    return 0;
}
