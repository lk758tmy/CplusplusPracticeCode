#include <iostream>
#include <algorithm>
using namespace std;
int a[30001];
bool cmp(int a,int b){
    return a>b;
}
int main(){
    freopen("group.in","r",stdin);
    freopen("group.out","w",stdout);
    int s,n,cnt=0;
    cin>>s>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,cmp);
    
    a[n]=-1;
    int t;
    for(int i=0;i<n;i++){
        if(a[i]==-1) continue;
        t=-1;
        for(int j=i+1;j<n;j++){
            if(a[j]!=-1&&a[i]+a[j]<=s){
                t=a[j];
                a[j]=-1;
                break;
            }
        }
        cnt++;
    }
    cout<<cnt;
    //system("pause");
    return 0;
}
