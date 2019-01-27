#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
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
    int f,t,s=0,k=1;
    string num;
    cin>>f>>num>>t;
    for(int i=num.size()-1;i>-1;i--){
        if(num[i]>-'0'&&num[i]<='9')
            s+=k*(num[i]-'0');
        else
            s+=k*(num[i]-'A'+10);
        k*=f;
    } 
    k=1;
    while(k<s){
        k*=t;
    }
    int cnt=0;
    while(s>0){
        bool flag=false;
        for(int i=t-1;i>0;i--){
            if(s>=k*i){
                s-=k*i;
                cout<<numc(i);
                flag=true;
                break;
            }
        }
        if(flag==false&&cnt!=0) cout<<'0';
        k/=t;
        cnt++;
    }
    return 0;
}
