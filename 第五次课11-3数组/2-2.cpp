#include <iostream>
using namespace std;
int main()
{
    int a[3]={0};//将a的所有成员均初始化为0
    cout<<a[0]<<a[1]<<a[2]<<endl;
    
    double b[3]={1.1,2.2,3.3};//依次初始化b的每个成员 
    cout<<b[0]<<b[1]<<b[2]<<endl;
    
    int i,n;
    cin>>n;
    int c[n];//成员数不确定的不能用{}初始化 
    memset(c,0,sizeof(c));//将c的空间内的每个 *字节* 都设为0
    for(i=0;i<n;i++)
    {
        cout<<c[i];
    }
    
    
    system("pause");
    return 0;
}
