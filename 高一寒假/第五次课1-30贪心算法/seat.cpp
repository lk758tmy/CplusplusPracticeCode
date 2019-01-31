#include <iostream>
#include <memory.h>
#include <algorithm>
using namespace std;
struct r{
    int cnt,num;
}sx[1002],sy[1002];
bool cmp(r a,r b){
    return a.cnt>b.cnt;
}
int tmp[1002];
int main(){
    freopen("seat.in","r",stdin);
    freopen("seat.out","w",stdout);
    int m,n,k,l,d,ax,ay,bx,by;
    cin>>m>>n>>k>>l>>d;
    //L²åx[N]£¬K²åy[M] 
    for(int i=1;i<n;i++){
        sx[i].cnt=0;
        sx[i].num=i;
    }
    for(int i=1;i<m;i++){
        sy[i].cnt=0;
        sy[i].num=i;
    }
    
    for(int i=0;i<d;i++){
        cin>>ax>>ay>>bx>>by;
        if(ax==bx) sx[min(ay,by)].cnt++;
        else sy[min(ax,bx)].cnt++;
    }
    sort(sx+1,sx+n,cmp);
    sort(sy+1,sy+m,cmp);
    
    memset(tmp,0,sizeof(tmp));
    for(int i=1;i<=k;i++) tmp[sy[i].num]++;
    for(int i=0;i<1002;i++)
        if(tmp[i]!=0) cout<<i<<' ';
    cout<<endl;
    memset(tmp,0,sizeof(tmp));
    for(int i=1;i<=l;i++) tmp[sx[i].num]++;
    for(int i=0;i<1002;i++)
        if(tmp[i]!=0) cout<<i<<' ';
    //system("pause");   
    return 0;
}
