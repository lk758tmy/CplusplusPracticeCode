#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
//更好的方法：转10从后向前 ;转n用模法 
//numc可以改成数据驱动，暂未做 
using namespace std;
char numc(int x){
    if(x>=0&&x<=9)
        return char('0'+x);
    else
        return char('A'+x-10);
}
int main(){
    freopen("conver.in","r",stdin);
    freopen("conver.out","w",stdout);
    int f,t,s=0,cnt=0;
    string tmp="0\0",num;
    bool flag=true;
    cin>>f>>num>>t;
    for(int i=0;i<num.size();i++){
        s*=f;
        if(num[i]>-'0'&&num[i]<='9')
            s+=(num[i]-'0');
        else
            s+=(num[i]-'A'+10);
    }
    num="\0";
    while(s>0){
        tmp[0]=numc(s%t); 
        num=tmp+num;
        s/=t;
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        if(!(flag!=true&&num[i]==0)){
            cout<<num[i];
            flag=false;
        }
    }
    return 0;
}
