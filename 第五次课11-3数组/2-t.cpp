#include <iostream>
//开关灯问题 
using namespace std;
int a[31];
int main()
{
    int i,j,n;
    cin>>n;
    for(j=2;j<=5;j++)
        for(i=1;i<=n;i++)
            if(i%j==0)
                a[i]=1-a[i];//1->0 0->1 
    for(i=1;i<=n;i++)
        if(a[i]==0)
            cout<<i<<" ";
    
    system("pause");
    return 0;
}
