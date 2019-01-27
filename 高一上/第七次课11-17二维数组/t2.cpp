#include <iostream>//Ñî»ÔÈý½Ç 
#include <memory.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1][n+1];
    memset(a,0,sizeof a);
    a[1][1]=1;
    for(int i=2;i<=n;i++)
        for(int j=1;j<=i;j++)
            a[i][j]=a[i-1][j]+a[i-1][j-1];        
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    system("pause");
    return 0;
}
