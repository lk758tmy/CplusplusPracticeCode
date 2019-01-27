#include <iostream>
using namespace std;
int pr[100],num[100];
int main(){
    freopen("prize.in","r",stdin);
    freopen("prize.out","w",stdout);
    int money,n;
    cin>>money>>n;
    for(int i=0;i<n;i++)
        cin>>pr[i]>>num[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(pr[i]>pr[j]){
                swap(pr[i],pr[j]);
                swap(num[i],num[j]);           
            }        
    int t=0,cnt=0;
    while(money>0){
        if(num[t]<=0) t++;
        if(t>=n) break;         
        if(money-pr[t]>-1){
            num[t]--;
            money-=pr[t];
        }else break;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
