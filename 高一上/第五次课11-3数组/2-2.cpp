#include <iostream>
using namespace std;
int main()
{
    int a[3]={0};//��a�����г�Ա����ʼ��Ϊ0
    cout<<a[0]<<a[1]<<a[2]<<endl;
    
    double b[3]={1.1,2.2,3.3};//���γ�ʼ��b��ÿ����Ա 
    cout<<b[0]<<b[1]<<b[2]<<endl;
    
    int i,n;
    cin>>n;
    int c[n];//��Ա����ȷ���Ĳ�����{}��ʼ�� 
    memset(c,0,sizeof(c));//��c�Ŀռ��ڵ�ÿ�� *�ֽ�* ����Ϊ0
    for(i=0;i<n;i++)
    {
        cout<<c[i];
    }
    
    
    system("pause");
    return 0;
}
