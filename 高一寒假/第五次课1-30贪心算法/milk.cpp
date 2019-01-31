#include <iostream>
#include <algorithm>
using namespace std;
struct farmer{
    int price;
    int milk;
}a[5001];
bool cmp(farmer a,farmer b){
    return a.price<b.price;
}
int main(){
    freopen("milk.in","r",stdin);
    freopen("milk.out","w",stdout);
    int need,n;
    long long cost=0;
    cin>>need>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].price>>a[i].milk;
    }
    sort(a,a+n,cmp);
    
    int t=0;
    while(need>0){
        if(need>=a[t].milk){
            need-=a[t].milk;
            cost+=a[t].milk*a[t].price;
        }else{
            cost+=need*a[t].price;
            need=0;
        }
        t++;
    }
    cout<<cost;
    //system("pause");
    return 0;
}
