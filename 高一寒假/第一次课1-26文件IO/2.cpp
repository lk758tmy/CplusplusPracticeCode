#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
    freopen("2.in","r",stdin);
    freopen("2.out","w",stdout);
    int n,a[101];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);//快速排序 从小到大 
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
    return 0;
}

