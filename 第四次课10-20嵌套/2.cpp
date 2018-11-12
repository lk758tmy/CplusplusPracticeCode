#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
        //创建仅在循环内使用的局部变量j 
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"+";
        cout<<endl;
    }
    system("pause");
    return 0;
}
