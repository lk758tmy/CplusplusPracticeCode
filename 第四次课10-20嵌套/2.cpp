#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
        //��������ѭ����ʹ�õľֲ�����j 
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"+";
        cout<<endl;
    }
    system("pause");
    return 0;
}
