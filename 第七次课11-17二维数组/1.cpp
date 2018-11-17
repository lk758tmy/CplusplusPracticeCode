#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
    cout<<a[2][3]<<" ";
    
    int b[3][4]={
    {0,1,2,3},
    {4,5,6,7},
    {8,9,10,11},
    };
    cout<<a[1][1]<<" ";
    
    int c[11][11];
    for(int i=1;i<12;i++)
        for(int j=1;j<12;j++)
            c[i][j]=i*j;
    cout<<c[6][9]<<" ";
    
    int d[128][128];
    memset(d,0,sizeof d);
    cout<<d[0][0]<<endl;
    system("pause");
    return 0;
}//矩阵初始化的四种方式 
